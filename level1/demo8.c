#include <stdio.h>

void input(char *str);
void concatenate_strings(char *str1, char *str2);
void display(char *str);

void input(char *str)
{
    scanf("%s", str);
}

void concatenate_strings(char *str1, char *str2)
{
    int i = 0, j = 0;

    // move to end of str1
    while(str1[i] != '\0')
    {
        i++;
    }

    // copy str2 into str1
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

void display(char *str)
{
    printf("Concatenated string: %s\n", str);
}

int main()
{
    char str1[200], str2[100];

    printf("Enter first string: ");
    input(str1);

    printf("Enter second string: ");
    input(str2);

    concatenate_strings(str1, str2);

    display(str1);

    return 0;
}