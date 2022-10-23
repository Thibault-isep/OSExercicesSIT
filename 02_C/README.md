# OSExercicesSIT
## OS exercices for SIT semester - Thibault CHANIER

To compile, write gcc program_name.c -o program_name (add -lm at the end for the mypower.c program)

mypower.c : The goal of this program is to calculate the power of a number by another, which are entered by the user
* If the user omit the second number, it calculates the power 2 of the first number
* If the user enters something which is not a number (not a float or an integer), it returns "Usage: power num"

mystrcmp.c : The goal of this program is to compare the length of 2 strings which are entered by the user
* If the first string's length is equal to the second one, it returns "0"
* If the first string's length is smaller than the second one, it returns "s1 < s2"
* If the first string's length is larger than the second one, it returns "s1 > s2"