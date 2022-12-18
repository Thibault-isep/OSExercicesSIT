#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
extern char** environ;

void do_child() {
    printf("This is child (pid = %d)¥n", getpid());
    exit(2);
}

void main() {
    int child, status;

    if((child = fork()) < 0) {
        perror("fork");
        exit(1);
    }
    if(child == 0) {
        do child();
    } else {
        if(wait(&status) < 0) {
            perror("wait");
            exit(1);
        }
        printf("This is parent. The child (pid=%d) existed with status (%d)¥n", child, WIFEXITED(status));
    }
}