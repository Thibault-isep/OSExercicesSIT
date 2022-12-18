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
    if (argc != 4) {
        printf("Usage: ./prog host port file\n");
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

    // Read the file contents into a buffer
    char *file_name = argv[3];
    FILE *fp = fopen(file_name, "r");
    if (fp == NULL) {
        perror("fopen");
        exit(1);
    }
    
    // Connect to the server
    if (connect (sockfd, (struct sockaddr *)&serv, sizeof(serv)) < 0) {
        perror("connect");
        exit(1);
    }
    char *line = NULL;
    size_t line_size = 0;
    
    printf("Each line of the %s file will be send to the server\nYou can see the following responses :\n", file_name);

    while (getline(&line, &line_size, fp) >= 0) {
        // Send the content line to the server
        len = send(sockfd, line, strlen(line), 0);

        // Receive the response from the server
        len = recv(sockfd, buf, len, 0);
        buf[len] = '\0';

        // Print the response
        printf("<== %s", buf);
    }
    printf("\n");

    // Clean up
    fclose(fp);
    free(line);
    close(sockfd);
    return 0;
}