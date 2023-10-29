#include <iostream>      //man socket------------>command
#include <netinet/in.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include <netdb.h>       //man getnameinfo             ------------>command
#include <string.h>    //man memset                 ------------>command
#include<unistd.h>
#include<arpa/inet.h>
#include <cstring>  
#include <cstdlib>
#include <algorithm>

class Server {
public:
    Server(int port);
    bool Bind_socket();
    void Accept_Connections();
    void send_to_client(const char *message,int clientSocket);
    void Rec_client(int clientSocket);

    sockaddr_in hint;
    sockaddr_in client;

    int clientSocket;
    int info;
    int byterecv;

    pid_t new_process;

    char buf[4096];
    char host[NI_MAXHOST];
    char svc[NI_MAXSERV];

    ~Server();

private:
char message[100]="\nChoose one of these: \n" //message to client
                                "\n1-term for terminal.\n"
                                "\n2-calc for calulator.\n"
                                "\n3-fire for firefox.\n\n";
    int port;
    int listening;
};