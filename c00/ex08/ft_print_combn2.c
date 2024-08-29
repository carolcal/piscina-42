#include <unistd.h>
void	ft_print(int n)
{
	int	nb;
	int	i;
	int	nb_max;
	int	temp;
	char	c;

	nb = 0;
	i = 0;
	nb_max = 1;

	while(i < n)
	{
		nb_max *= 10;
		i++;
	}

	while(n < nb_max)
	{
		i = n;
		temp = nb;
		while( i > 0)
		{
			if(temp >= 10)
			{
				c = (temp / 10) + '0';
				temp = temp % 10;
			}
			else
			{
				c = temp + '0';
				temp = 0;
			}
			write (1, &c, 1);
			i--;
		}
		nb++;
	}
}

int main()
{
	ft_print(2);
	return(0);
}
