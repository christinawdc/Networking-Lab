#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server;

    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(sock, (struct sockaddr*)&server, sizeof(server));
    char message[1024], buffer[1024];

    while(1) {
        // send to server
        printf("Client: ");
        fgets(message, sizeof(message), stdin);
        send(sock, message, strlen(message), 0);

        if(strcmp(message,"exit\n")==0) break;

        // receive reply
        int n = recv(sock, buffer, sizeof(buffer), 0);
        buffer[n] = '\0';
        printf("Server: %s", buffer);

        if(strcmp(buffer,"exit\n")==0) break;
    }

    close(sock);
    return 0;
}
