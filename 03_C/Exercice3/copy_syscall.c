#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) 
{
    int src, dst;
    char buffer[1024];
    long int rcount, wcount;

    src = open(argv[1], O_RDONLY);
    if(src == NULL) 
    {
        perror("src");
        fclose(src);
        exit(1);
    }

    dst = open(argv[2], O_WRONLY);
    if(dst == NULL) {
        perror("dst");
        fclose(dst);
        exit(1);
    }

    rcount = read(src, buffer, 1024);
    wcount = write (dst, buffer, rcount);
}