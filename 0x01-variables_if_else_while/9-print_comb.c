 #include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Prints all possible combination of single-digit number.
 *
 * Return: Always  0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchat(' ');
		}
	}
		putchar('\n');
		return (0);
}


