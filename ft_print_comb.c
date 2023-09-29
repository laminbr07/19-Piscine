#include <unistd.h>

void ft_putchar(char a, char b, char c)

{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar((a + '0'), (b + '0'), (c + '0'));
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main()
{
	ft_print_comb();
}
*/
