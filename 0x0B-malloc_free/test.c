#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - entry
 * @s1: char
 * @s2: char
 * Return: ptr
*/
char *str_concat(char *s1, char *s2)
{
char *ptr;
unsigned long int length = 0, i = 0, temp1_len = 0;
char *temp1 = s1;
char *temp2 = s2;
if (s1 == NULL)
temp1 = "";
if (s2 == NULL)
temp2 = "";
temp1_len = strlen(temp1);
length = temp1_len + strlen(temp2) + 1;
ptr = malloc(sizeof(char) * length);
if (ptr == NULL)
return (NULL);
while (i < length)
{
if (i < temp1_len)
ptr[i] = temp1[i];
else
ptr[i] = temp2[i - temp1_len];
i++;
}
return (ptr);
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat(NULL, "");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}