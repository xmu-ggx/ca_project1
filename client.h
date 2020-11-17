#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <iostream>
#include "Data.h"

using namespace std;


int send(Data data)
{
    #define DESC_PORT 8000
    #define DESC_IP_ADDRESS "192.168.117.128"

    int sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock_fd < 0)
    {
        perror("sock");
        exit(1);
    }

    sockaddr_in addr_serv;
    int len = sizeof(addr_serv);
    memset(&addr_serv, 0, len);

    addr_serv.sin_family = AF_INET;
    addr_serv.sin_port = htons(DESC_PORT);
    addr_serv.sin_addr.s_addr = inet_addr(DESC_IP_ADDRESS);

    int send_num;
    // int send_buf[2] = {1, 2};
    Data send_buf = data;

    // cout << "client send: " << send_buf[0] << '\t' << send_buf[1] << endl;

    send_num = sendto(sock_fd, &send_buf, sizeof(send_buf), 0, (struct sockaddr *)&addr_serv, len);
    if (send_num < 0)
    {
        perror("sendto error");
        exit(-1);
    }

    close(sock_fd);
    return 0;

}
