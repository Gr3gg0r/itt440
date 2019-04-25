#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(){

	char SayaTanya [256] = " Asslamualaikum ";
	char DiaJawab[256];


	int cln_socket;
	cln_socket = socket(AF_INET,SOCK_STREAM,0);
	
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(4999);
	server_address.sin_addr.s_addr = inet_addr("192.168.182.132");
	
	
	int connection_status = connect(cln_socket,(struct sockaddr *) &server_address,sizeof(server_address));
	
	
	//check error
	if (connection_status == -1){
	
		printf("There was an error \n\n");
		
	}
	//check error

	//send data
	
	send(cln_socket , SayaTanya , sizeof(SayaTanya),0);


	
	//recieve data
	recv (cln_socket,&DiaJawab,sizeof(DiaJawab),0);
	
	printf("The Client sent data : %s\n ", SayaTanya);
	printf("The server sent data : %s\n ", DiaJawab);
	
	
	close(cln_socket);



	return 0;
}