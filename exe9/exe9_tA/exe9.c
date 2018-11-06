#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/dispatch.h>

int main(int argc, char *argv[]) {
	int serverId, chnId, rcvId;
	FILE * serverFile;
	char msg [100];
	char replyMsg [100] = {"I got your message :)\n"};

	serverId = getpid();
	chnId = ChannelCreate(0);

	printf("Welcome to the QNX | SERVER ID: %d | CHN ID: %d \n", serverId, chnId);

	serverFile = fopen("/root/serverinfo.txt", "w");
	fprintf(serverFile,"%d\n%d",serverId, chnId);
	fclose(serverFile);
	printf("Server is running and Accepting Messages!!! Hey !!!\n");



	while(1)
	{
		printf("Server is waiting for messages...\n");
		rcvId = MsgReceive(chnId, msg, 100, NULL);

		if (rcvId > 0)
		{
			printf("Message received: <%s>\n", msg);
			MsgReply(rcvId, 0, replyMsg, 100);
		} else
		{
			printf("Error on receiving message :(\n");
		}

	}

	return EXIT_SUCCESS;
}
