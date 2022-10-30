#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int c;
    FILE *src, *dst;

    src = fopen(argv[1], "r");
    if(src == NULL) 
    {
        perror("src");
        fclose(src);
        exit(1);
    }

    dst = fopen(argv[2], "w+");
    if(dst == NULL) {
        perror("dst");
        fclose(dst);
        exit(1);
    }

    while((c = fgetc(src) != EOF)) 
    {
        fputc(c, dst);
    }
    fclose(src);
    fclose(dst);
}