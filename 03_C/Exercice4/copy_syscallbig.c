#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) 
{
    int src, dst;
    char buffer[1024];
    long int rcount, wcount;

    if(src = open(argv[1], O_RDONLY) == -1) {
        perror("src");
        close(src);
        exit(1);
    }
    
    if(dst = open(argv[2], O_WRONLY) == -1) {
        perror("dst");
        close(dst);
        exit(1);
    }

    while((rcount = read(src, buffer, 1024)) > 0) {
        if((wcount = write(dst, buffer, rcount)) != rcount){
            perror("error during writing");
            exit(3);
        }
    }

    close(src);
    close(dst);
}