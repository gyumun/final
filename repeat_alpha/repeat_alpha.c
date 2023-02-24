#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int t = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				t += av[1][i] - 96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				t += av[1][i] - 64;
			while (t)
			{
				write(1, &av[1][i], 1);
				t--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
