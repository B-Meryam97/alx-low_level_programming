#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	char message[] = "_putchar\n";
	int a;

	for (a = 0 ; message [a] != '\0' ; a++)
	{
		_putchar(message[a]);
	}

	return (0);
}
