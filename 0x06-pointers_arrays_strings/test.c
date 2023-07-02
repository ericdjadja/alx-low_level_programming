#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

void reverse_array(int *a, int n)
{
while (n - 1 >= 0)
{
long d = 10000000000;
int r = 0;
int temp = a[n - 1];
if (temp == 0)
putchar('0' + temp);
else
{
while (d != 0)
{
r +=  temp / d;
int t = temp / d;
if (r != 0 || t != 0)
putchar('0' + t);
temp = temp - (t * d); 
d /= 10;
}

}
if (n != 0)
{
putchar(',');
putchar(' ');
}
n--;
}
putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}