# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

To compile, write gcc program_name.c -o program_name
Then, you can execute the program by writing ./program_name

As can be seen in the results, the execution time increases drastically when increasing the number of processes performed. This is very easily explained, since the number of processes created is equal to 2^n, where n is the number of fork() commands performed.
So we can say that the execution time increases exponentially with the number of fork() executed.