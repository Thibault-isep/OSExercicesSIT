# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

To compile, write gcc program_name.c -o program_name

* Both Exercice3/copy.c and Exercice4/copy_syscall.c are working the same way. You must give as first argument a source file "src.txt" and a file in which the data will be copied "dst.txt". You can work on your own files yourself by adding them to the root of the folder containing the code.
The two codes differ however in the use of functions, the first uses default functions in C language, and the second uses system calls

* In exercise 4, the goal is to perform the two previous codes on a 10Mb file containing random numbers and compare the running time. So you must in the same way give as argument a source filepath and a destination filepath and add the "time" command before (see libCopyResults.png for example).
Results :
 - For the library version, we obtain an execution time of 0.423s.

 /!\ I didn't have the opportunity to test the copy_syscallbig.c code, because I had a problem importing the "unistd.h" header, and I couldn't fix it. So I have no result for this code. However, I'm pretty sure it works.