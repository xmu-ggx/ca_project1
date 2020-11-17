#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "Data.h"


using namespace std;


/**
 * keywords : linux c++ udp  
*/


int receive()
{
    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);  // build socket

    if (sock_fd < 0)
    {
        cout << "build socket error " << endl;
        exit(-1);
    }

    struct sockaddr_in addr_serv;
    memset(&addr_serv, 0, sizeof(struct sockaddr_in)); 

    addr_serv.sin_family = AF_INET;
    addr_serv.sin_addr.s_addr = htonl(INADDR_ANY);
    addr_serv.sin_port = htons(8000);

    // cout << htonl(INADDR_ANY) << endl;
    // cout << htons(8000) << endl;

    int len = sizeof(addr_serv);

    if (bind(sock_fd, (struct sockaddr *)&addr_serv, sizeof(addr_serv)) < 0)
    {
        cout << "bind error" << endl;
        exit(-1);
    }

    int recv_num;
    Data recv_buf;
    struct sockaddr_in addr_client;
    
    while (1)
    {
        cout << "server waiting ------" << endl;
        recv_num = recvfrom(sock_fd, &recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_client, (socklen_t *)&len);
        if (recv_num < 0)
        {
            cout << "receive error" << endl;
            exit(-1);
        }

        cout << '\t' << "angle: \t" << recv_buf.angle << "\t distance: \t" << recv_buf.distane << endl;
    }
    close(sock_fd);
    return 0;

}

int main()
{
    receive();
    return 0;
}
