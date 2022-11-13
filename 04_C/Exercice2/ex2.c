#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    printf("this is parent (pid = %d%s", getppid(), ")\n");
    printf("this is child (pid = %d%s", getpid(), ")\n");
    return 0;
}