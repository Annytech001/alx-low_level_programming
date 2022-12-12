#include <stdio.h>
#include <unistd.h>
/**
 * main - print text to standard error
* Return: 0
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
