#include <stdio.h>

/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int s;
int i;

for (s = 0; s <= 9; s++)
{
for (i = s + 1; i <= 9; i++)
{
putchar(s + '0');
putchar(i + '0');

if (s < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
