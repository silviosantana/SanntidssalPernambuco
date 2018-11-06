#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/dispatch.h>

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

int main(int argc, char *argv[]) {
	set_priority(25);

	int serverId, chnId, rcvId;
	FILE * serverFile;
	char msg [100];
	char replyMsg [100] = {"I got your message :)\n"};
	struct _msg_info  info;

	serverId = getpid();
	//chnId = ChannelCreate(_NTO_CHF_FIXED_PRIORITY);
	chnId = ChannelCreate(0);

	printf("Welcome to the QNX | SERVER ID: %d | CHN ID: %d \n", serverId, chnId);

	serverFile = fopen("/root/serverinfo.txt", "w");
	fprintf(serverFile,"%d\n%d",serverId, chnId);
	fclose(serverFile);
	printf("Server is running and Accepting Messages!!! Hey !!!\n");



	while(1)
	{
		printf("Server is waiting for messages...\n");
		//printf("Server priority BEFORE: %d\n", get_priority());
		rcvId = MsgReceive(chnId, msg, 100, &info);
		//printf("Server priority AFTER: %d\n", get_priority());

		if (rcvId > 0)
		{
			printf("Message received: <%s> | PID: %d | TID: %d | prio:%d\n ", msg, info.pid, info.tid, info.priority);
			MsgReply(rcvId, 0, replyMsg, 100);
		} else
		{
			printf("Error on receiving message :(\n");
		}

	}

	return EXIT_SUCCESS;
}
