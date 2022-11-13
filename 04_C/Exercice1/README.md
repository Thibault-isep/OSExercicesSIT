# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

To compile, write gcc program_name.c -o program_name
Then, you can execute the program by writing ./program_name

To use the fork() function, you have to include headers <unistd.h> <sys/types.h>
The goal is to create a new process which applies in parallel with the process which makes the fork() call. Both processes will then execute the next instruction following the fork() call. It is therefore important to call fork() before the code that you want to integrate into the child process.