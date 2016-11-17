/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:38:21 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/30 20:34:24 by sbalcort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printlines(int x, char first, char second, char third)
{
	if (x > 0)
	{
		ft_putchar(first);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(second);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(third);
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y > 0)
		{
			printlines(x, 'o', '-', 'o');
			ft_putchar('\n');
			y--;
		}
		while (y > 1)
		{
			printlines(x, '|', ' ', '|');
			ft_putchar('\n');
			y--;
		}
		if (y == 1)
		{
			printlines(x, 'o', '-', 'o');
			ft_putchar('\n');
		}
	}
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 0;
	nb = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == '-')
		neg++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (nb * -1);
	else
		return (nb);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (0);
	}
	else
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}