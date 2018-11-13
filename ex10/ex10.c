#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/iofunc.h>
#include <sys/dispatch.h>
#include <time.h>
#include <pthread.h>

dispatch_t              *dpp;
resmgr_attr_t           resmgr_attr;
dispatch_context_t      *ctp;
resmgr_connect_funcs_t  connect_funcs;
resmgr_io_funcs_t       io_funcs;
iofunc_attr_t           io_attr;

int io_read(resmgr_context_t* ctp, io_read_t* msg, iofunc_ocb_t* ocb);
int io_write (resmgr_context_t *ctp, io_write_t *msg, RESMGR_OCB_T *ocb);

char buf[101];
char aux[101];
int count;

void error(char* s){
	perror(s);
	exit(EXIT_FAILURE);
}

void* counter()
{
	while(1)
	{
		if (strcmp("stop\n", buf) == 0)
		{
		}else if (strcmp("up\n", buf) == 0)
		{
			count++;
		}else if (strcmp("down\n", buf) == 0)
		{
			count--;
		} else
		{
			printf("Jebi ga!\n");
		}
		clock_nanosleep(CLOCK_MONOTONIC, 0, &(struct timespec){0, 100*1000*1000}, NULL);
	}
}

int main(int argc, char *argv[]) {
	printf("Start resource manager\n");

	pthread_t count_thread;
	//initialize counter
	count = 0;

	// create dispatch.
	if (!(dpp = dispatch_create())){
		error("Create dispatch");
	}

	// initialize resource manager attributes.
	memset(&resmgr_attr, 0, sizeof(resmgr_attr));
	resmgr_attr.nparts_max = 1;
	resmgr_attr.msg_max_size = 2048;

	// set standard connect and io functions.
	iofunc_func_init(_RESMGR_CONNECT_NFUNCS, &connect_funcs, _RESMGR_IO_NFUNCS, &io_funcs);
	iofunc_attr_init(&io_attr, S_IFNAM | 0666, 0, 0);

	// override functions
	io_funcs.read = io_read;
	io_funcs.write = io_write;

	// establish resource manager
	if (resmgr_attach(dpp, &resmgr_attr, "/dev/myresource", _FTYPE_ANY, 0, &connect_funcs, &io_funcs, &io_attr) < 0)
		error("Resmanager attach");
	ctp = dispatch_context_alloc(dpp);

	pthread_create(&count_thread, NULL, counter, NULL);
	// wait forever, handling messages.
	while(1){
		if (!(ctp = dispatch_block(ctp))){
			error("Dispatch block");
		}
		dispatch_handler(ctp);
	}

	pthread_join(count_thread, NULL);

	exit(EXIT_SUCCESS);
}

int io_read(resmgr_context_t *ctp, io_read_t *msg, iofunc_ocb_t *ocb){

	//char buf[] = "Hello World\n";

	sprintf(aux, "Counter value: %d\n", count);
	printf("%s\n", aux);
	if(!ocb->offset){
		// set data to return
		SETIOV(ctp->iov, aux, strlen(aux));
		_IO_SET_READ_NBYTES(ctp, strlen(aux));

		// increase the offset (new reads will not get the same data)
		ocb->offset = 1;

		// return
		return (_RESMGR_NPARTS(1));
	} else {
		// set to return no data
		_IO_SET_READ_NBYTES(ctp, 0);

		// return
		return (_RESMGR_NPARTS(0));
	}
}

int io_write (resmgr_context_t *ctp, io_write_t *msg, RESMGR_OCB_T *ocb)
{

    /* set up the number of bytes (returned by client's write()) */

    _IO_SET_WRITE_NBYTES (ctp, msg->i.nbytes);

    /*
     *  Reread the data from the sender's message buffer.
     *  We're not assuming that all of the data fit into the
     *  resource manager library's receive buffer.
     */

    resmgr_msgread(ctp, buf, msg->i.nbytes, sizeof(msg->i));
    buf [msg->i.nbytes] = '\0'; /* just in case the text is not NULL terminated */

    printf ("Received Command: %s | Counter: %d\n", buf, count);


    return (_RESMGR_NPARTS (0));
}
