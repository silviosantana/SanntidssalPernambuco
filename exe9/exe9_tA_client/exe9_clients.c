#include <stdlib.h>
#include <stdio.h>
#include <sys/dispatch.h>


int main(int argc, char *argv[]) {

	FILE* serverFile;
	int serverID, channelID, connID;
	char msg[100] = {"Hello server!"};
	char reply[100];
	serverFile = fopen("/root/serverinfo.txt","r");
	fscanf(serverFile, "%d", &serverID);
	fscanf(serverFile, "%d", &channelID);
	fclose(serverFile);

	connID = ConnectAttach (0, serverID, channelID, 0, 0);

	MsgSend(connID, msg, 100, reply, 100);
	printf("Success! Reply: %s\n", reply);

	ConnectDetach(connID);
	return EXIT_SUCCESS;
}
