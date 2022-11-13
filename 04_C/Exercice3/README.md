# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

To compile, write gcc program_name.c -o program_name
Then, you can execute the program by writing ./program_name

As we can see int the results, the "hello !" line is printed many times. In fact we got 1024 lines, which corresponds to 2^10, because we entered 10, which generates 10 fork system calls in a row so the total number of processes created is 1024.