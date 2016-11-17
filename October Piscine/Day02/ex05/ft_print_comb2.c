/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 19:37:38 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/27 16:01:41 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_nbrt(int t)
{
	if (t < 10)
	{
		ft_putchar(48);
		ft_putnbr(t);
	}
	else
	{
		ft_putnbr(t);
	}
}

void	ft_nbro(int o)
{
	if (o < 10)
	{
		ft_putchar(48);
		ft_putnbr(o);
	}
	else
	{
		ft_putnbr(o);
	}
}

void	ft_output(int t, int o)
{
	ft_nbrt(t);
	ft_putchar(' ');
	ft_nbro(o);
	if (t == 98 && o == 99)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int t;
	int o;

	t = 0;
	o = 1;
	while (t < 99)
	{
		if (o <= 99)
		{
			ft_output(t, o);
			o++;
		}
		else
		{
			t++;
			o = t + 1;
		}
	}
}

