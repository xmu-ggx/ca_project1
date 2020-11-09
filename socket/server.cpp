#include<winsock2.h>
#include<iostream>
#pragma comment(lib,"WS2_32.lib")
using namespace std;

int main()
{
WSADATA wsaData;  //init data
SOCKET RecvSocket;

sockaddr_in RecvAddr;   // server aaddress
int Port=4000;// server lisen port
char RecvBuf[1024]; 
int BufLen=1024;  // buffer

sockaddr_in SenderAddr;
int SenderAddrSize=sizeof(SenderAddr);
//初始化Socket
WSAStartup(MAKEWORD(2,2),&wsaData);

RecvSocket=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);  // build socket

RecvAddr.sin_family=AF_INET;
RecvAddr.sin_port=htons(Port);
RecvAddr.sin_addr.s_addr=htonl(INADDR_ANY);
bind(RecvSocket, (SOCKADDR *)&RecvAddr, sizeof(RecvAddr));

printf("receiving datagrams...\n");
recvfrom(RecvSocket,RecvBuf,BufLen,0,(SOCKADDR *)&SenderAddr,&SenderAddrSize);

printf("finished receiving,closing socket..\n");
closesocket(RecvSocket);

printf("Exiting.\n");
WSACleanup();
return 0;
}