#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/dispatch.h>
#include <sys/mman.h>
#include <pthread.h>


int set_priority(int priority){
    int policy;
    struct sched_param param;
    if(priority < 1 || priority > 63){
        return -1;
    }
    pthread_getschedparam(pthread_self(), &policy, &param);
    param.sched_priority = priority;
    return pthread_setschedparam(pthread_self(), policy, &param);
}

int get_priority(){
    int policy;
    struct sched_param param;
    pthread_getschedparam(pthread_self(), &policy, &param);
    return param.sched_curpriority;
}

void * client_function(void* param)
{
	int *params;
	params = (int*)param;
	set_priority(params[2]);
	char msg[100] = {"Hello server!"};
	char reply[100];

	int	connID = ConnectAttach (0, params[0], params[1], 0, 0);
	//printf("Sending message\n");
	MsgSend(connID, msg, 100, reply, 100);
	printf("Success! Reply: %s\n", reply);

	ConnectDetach(connID);
	return 0;
}

int main(int argc, char *argv[]) {
	set_priority(50);
	printf("Client main started with priority %d\n", get_priority());
	pthread_t client_1, client_2, client_3, client_4;

	int serverID, channelID;
	FILE* serverFile = fopen("/root/serverinfo.txt","r");
	fscanf(serverFile, "%d", &serverID);
	fscanf(serverFile, "%d", &channelID);
	fclose(serverFile);

	int params1 [3] = {serverID, channelID, 10};
	int params2 [3] = {serverID, channelID, 20};
	int params3 [3] = {serverID, channelID, 30};
	int params4 [3] = {serverID, channelID, 40};

	pthread_create(&client_1, NULL, client_function, (void*)params1);
	pthread_create(&client_2, NULL, client_function, (void*)params2);
	pthread_create(&client_3, NULL, client_function, (void*)params3);
	pthread_create(&client_4, NULL, client_function, (void*)params4);

	pthread_join(client_1, NULL);
	pthread_join(client_2, NULL);
	pthread_join(client_3, NULL);
	pthread_join(client_4, NULL);

	return EXIT_SUCCESS;
}
