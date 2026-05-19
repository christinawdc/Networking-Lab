#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server, client;
    socklen_t len = sizeof(client);

    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = INADDR_ANY;

    bind(sock, (struct sockaddr*)&server, sizeof(server));
    listen(sock, 5);
    printf("TCP Server listening...\n");
    int new_sock = accept(sock, (struct sockaddr*)&client, &len);
    char buffer[1024], message[1024];

    while(1) {
        // receive from client
        int n = recv(new_sock, buffer, sizeof(buffer), 0);
        buffer[n] = '\0';
        printf("Client: %s", buffer);

        if(strcmp(buffer,"exit\n")==0) break;

        // send reply
        printf("Server: ");
        fgets(message, sizeof(message), stdin);
        send(new_sock, message, strlen(message), 0);

        if(strcmp(message,"exit\n")==0) break;
    }

    close(new_sock);
    close(sock);
    return 0;
}
