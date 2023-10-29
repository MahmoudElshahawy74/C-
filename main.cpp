
#include "server.hpp"

int main() {
    Server server(54000);

    if (!server.Bind_socket()) {
        return -1;
    }

    server.Accept_Connections();

    return 0;
}
