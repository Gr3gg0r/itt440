#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <unistd.h>

int main (){
	
	char SayaJawab [256] = " Waalaikumsalam ";
	char DiaTanya [256];


	int serSoc;
	serSoc= socket(AF_INET,SOCK_STREAM,0);
	
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port=htons(4999);
	server_address.sin_addr.s_addr=INADDR_ANY;
	
	
	bind(serSoc,(struct sockaddr*) &server_address,sizeof(server_address));
	
	listen(serSoc,5);
	
	int clntSock ;
	clntSock = accept(serSoc, NULL,NULL);
	
	
	//send data
	send(clntSock , SayaJawab , sizeof(SayaJawab),0);
	//recieve data
	recv (clntSock,&DiaTanya,sizeof(DiaTanya),0);
	
	printf("The Client sent data : %s\n ", DiaTanya);
	printf("The server sent data : %s\n ", SayaJawab);
	
	
	close(clntSock);

	return 0;
}