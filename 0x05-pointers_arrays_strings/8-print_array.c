#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @a : input char
 * @n  : input char
 * Return : void
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", *(a + i));
if (i != n - 1)
printf(", ");
i++;
}
printf("\n");
}
