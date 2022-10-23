#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s1[20], s2[20];
    printf("Enter a first string (s1)");
    scanf("%s", s1);
    printf("Enter a second string (s2)");
    scanf("%s", s2);
    if (strlen(s1) == strlen(s2))
    {
        printf("0");
    }
    else if (strlen(s1) < strlen(s2))
    {
        printf("s1 < s2");
    }
    else
    {
        printf("s1 > s2");
    }
}