/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combfix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 20:55:10 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/27 20:55:12 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	output(char ones, char tens, char huns)
{
	ft_putchar(huns);
	ft_putchar(tens);
	ft_putchar(ones);
	if (huns == '7')
	{
		ft_putchar('\n');
	}
	else if (huns != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int ones;
	int tens;
	int huns;

	ones = '2';
	tens = '1';
	huns = '0';
	while (huns <= '7')
	{
		if ((huns < tens) && (tens < ones))
		{
			output(ones, tens, huns);
		}
		if (ones++ >= '9')
		{
			ones = '0';
			tens++;
		}
		if (tens > '9')
		{
			tens = '0';
			huns++;
		}
	}
}
