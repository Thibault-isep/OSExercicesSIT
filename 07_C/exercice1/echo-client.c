#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main (int argc, char *argv[])
{
    int sockfd, len;
    char buf[BUFSIZ];
    struct sockaddr_in serv;
    int port;

    // Check if the correct number of arguments were provided
    if (argc != 3) {
        printf("Usage: ./prog host port\n");
        exit(1);
    }

    // Create a socket
    if ((sockfd = socket (PF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket");
        exit(1);
    }

    // Set up the server address
    serv.sin_family = PF_INET;
    port = strtol(argv[2], NULL, 10);
    serv.sin_port = htons(port);
    inet_aton(argv[1], &serv.sin_addr);

    // Connect to the server
    if (connect (sockfd, (struct sockaddr *)&serv, sizeof(serv)) < 0) {
        perror("connect");
        exit(1);
    }
    
    //Wait for user input until it is exit
    while (strncasecmp(buf, "exit\n", 5) != 0) {
        printf("==> ");
        if((fgets (buf, BUFSIZ, stdin)) < 0) {
            perror("fgets");
        }
        //Send the user input to the server
        len = send (sockfd, buf, strlen(buf), 0);
        len = recv (sockfd, buf, len, 0);
        buf[len] = '\0';
        //Print back the user input from the server response
        printf("<== %s\n", buf);
    }
    close (sockfd);
    return 0;
}