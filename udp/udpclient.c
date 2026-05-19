#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_DGRAM, 0);

    struct sockaddr_in server;
    socklen_t len = sizeof(server);

    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    char message[1024], buffer[1024];
    
    while(1) {
        // send to server
        printf("Client: ");
        fgets(message, sizeof(message), stdin);
        sendto(sock, message, strlen(message), 0, (struct sockaddr*)&server, len);

        if(strcmp(message,"exit\n")==0) break;

        // receive reply
        int n = recvfrom(sock, buffer, sizeof(buffer), 0, NULL, NULL);
        buffer[n] = '\0';
        printf("Server: %s", buffer);

        if(strcmp(buffer,"exit\n")==0) break;
    }

    return 0;
}
