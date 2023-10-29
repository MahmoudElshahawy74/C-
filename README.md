# PC_Controller_CPP

Control Pc through Mobile using Socket Programming : application using socket programming in C++ language to control desktop applications.

Features : Send Client requests to server. Client send one of services to Server to excute it. -server excute requestes sent by client using system calls.

Pre-requests: -O.S :Linux Operating System (Ubuntu22). -VS code. C++ language. 
Tcp mobile (client) : [https://play.google.com/store/apps/details?id=tcpudpserverclient.steffenrvs.tcpudpserverclient&pcampaignid=web_share&pli=1&raii=tcpudpserverclient.steffenrvs.tcpudpserverclient&raboi=CAE%3D&rasi=4822299910820656511&rapt=AEjHL4NXXWRRFC-pBBf7QN3Z57KFHLF2rqiMm7vLv5tyTZ5drYogeQicX9BrcM-QV0_IJd1YK6ePhKtGpkh1ctK6skH9F54BleojvmuW0YYXTC7FDgbvmqE](https://play.google.com/store/apps/details?id=com.sollae.eztcpclient)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

To open a TCP port for remote connections on Ubuntu, you can use the ufw (Uncomplicated Firewall) utility, which provides a simple interface for managing your firewall rules. Here's how to open a TCP port using ufw:
Check if ufw is installed:
Ensure that ufw is installed. If it's not installed, you can install it using the following command:
sudo apt-get update
sudo apt-get install ufw

Enable ufw:
If ufw is not already enabled, enable it with: sudo ufw enable

Allow incoming connections on a specific TCP port:
To allow incoming connections on a specific TCP port (e.g., port 8080), use the following command:sudo ufw allow 8080/tcp
Replace 8080 with the desired port number. This command will open the specified port for incoming TCP traffic.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Start Project :  -Compile Server Program in VS terminal: $g++ main.cpp server_.cpp 
$./server_
-test client on your terminal locally : Telnet localhost 54000.

-open the app on your mobile Client : -type your IP pf your laptop's network and the port number to connect  ex 192.0.0.0. and your port ex 54000
choose one of services, Server will excute the command on your desktop.


references : https://www.youtube.com/watch?v=cNdlrbZSkyQ&t=0s
