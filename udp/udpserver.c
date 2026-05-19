#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_DGRAM, 0);

    struct sockaddr_in server, client;
    socklen_t len = sizeof(client);

    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = INADDR_ANY;

    bind(sock, (struct sockaddr*)&server, sizeof(server));
    printf("UDP Server listening...\n");
    char buffer[1024], message[1024];

    while(1) {
        // receive from client
        int n = recvfrom(sock, buffer, sizeof(buffer), 0, (struct sockaddr*)&client, &len);
        buffer[n] = '\0';
        printf("Client: %s", buffer);

        if(strcmp(buffer,"exit\n")==0) break;

        // send reply
        printf("Server: ");
        fgets(message, sizeof(message), stdin);
        sendto(sock, message, strlen(message), 0, (struct sockaddr*)&client, len);

        if(strcmp(message,"exit\n")==0) break;
    }

    return 0;
}
