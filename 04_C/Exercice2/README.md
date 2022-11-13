# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

To compile, write gcc program_name.c -o program_name
Then, you can execute the program by writing ./program_name

We can see that the two IDs are identical. This is easily explained because we called the getpid() function without generating a new process, it returns the current process ID which is the same as parent.