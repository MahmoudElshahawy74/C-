#include "server.hpp"


Server::Server(int port) : port(port), listening(-1) {}

bool Server::Bind_socket() {
     // Create a socket
    listening = socket(AF_INET, SOCK_STREAM, 0);
    if (listening == -1) {
    std::cerr << "Can't create a socket!" << std::endl;
        return false;
    }

    // Bind the socket to an IP / port
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, "0.0.0.0", &hint.sin_addr);

    if (bind(listening, (sockaddr*)&hint, sizeof(hint)) == -1) {
        std::cerr << "Can't bind to IP/port" << std::endl;
        return false;
    }

    if (listen(listening, SOMAXCONN)) {
        std::cerr << "Can't listen!" << std::endl;
        return false;
    }

    return true;
}

void Server::Accept_Connections() {
    socklen_t clientSize=sizeof(client);

    clientSocket =accept(listening,(sockaddr*)&client,&clientSize);

    if(clientSocket==-1){
        std::cerr<<"Problem with client connection !";
        return ;
    }
    //close the socket
    close(listening);

    memset(host, 0, NI_MAXHOST);
    memset(svc, 0, NI_MAXSERV);

   info = getnameinfo((sockaddr*)&client, sizeof(client ),host, NI_MAXHOST, svc, NI_MAXSERV, 0);

    if(info){
        std::cout<<host <<" connected on "<<svc << std::endl;
    }
    else{
        inet_ntop(AF_INET,&client.sin_addr,host,NI_MAXHOST);
        std::cout<< host<<" connected on "<<ntohs(client.sin_port)<<std::endl;
    }

    //send to client
    send_to_client(message,clientSocket);
    
    // while receiving display message, echo message
     Rec_client(clientSocket);

     // Close the client socket
    close(clientSocket);
}

void Server::Rec_client(int clientSocket) {
    while(true){
        //clear buffer 
        memset(buf, 0, 4096);
        // wait for a message
        byterecv=recv(clientSocket, buf, 4096, 0);
        if(byterecv==-1){
            std::cerr<< " The was a connection issue "<<std::endl;
            break;
        }
        if(byterecv==0){
            std::cout<< " The client disconnected "<<std::endl;
            break;
        }
        else{
                
            // std::cout << std::string(buf, 0, byterecv) << std::endl;
            std::string word(buf, 0, byterecv);
            
            new_process = fork(); // Create a new process

            // Remove leading and trailing whitespace and convert to lowercase
            word.erase(word.begin(), std::find_if(word.begin(), word.end(), [](unsigned char ch) {
                return !std::isspace(ch);
            }));

            word.erase(std::find_if(word.rbegin(), word.rend(), [](unsigned char ch) {
                return !std::isspace(ch);
            }).base(), word.end());

            std::transform(word.begin(), word.end(), word.begin(), ::tolower);

            if (new_process == 0) {
                if (word == "fire") { // Compare the string ss with "fire"
                    system("firefox");
                    std::cout << "Received: " << word << std::endl;
                }
                if (word == "term") { // Compare the string ss with "term"
                    system("gnome-terminal");
                    std::cout << "Received: " << word << std::endl;
                }
                if (word == "calc") { // Compare the string ss with "calc"
                    system("gnome-calculator");
                    std::cout << "Received: " << word << std::endl;
                }
            }
                
        }
        //display message 
        //std::cout<<"Received: "<<std::string(buf,0,byterecv)<<std::endl;
        // Resend message
        //send(clientSocket, buf, byterecv + 1, 0);
    }
}

void Server::send_to_client(const char *message,int clientSocket){
    send(clientSocket, message, strlen(message), 0);
}

Server::~Server() {
    close(listening);
}
