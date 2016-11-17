/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:35:39 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/30 19:49:23 by sbalcort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			printlines(x, 'A', 'B', 'C');
			ft_putchar('\n');
			y--;
		}
		while (y > 1)
		{
			printlines(x, 'B', ' ', 'B');
			ft_putchar('\n');
			y--;
		}
		if (y == 1)
		{
			printlines(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
	}
}
