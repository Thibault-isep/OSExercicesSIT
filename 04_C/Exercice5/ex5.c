#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("no input, enter an integer\n");
        exit(1);
    }
    char *a = argv[1];
    int count = atoi(a);
    for (int i = 0; i < count; i++) {
        fork();
    }
    return 0;
}