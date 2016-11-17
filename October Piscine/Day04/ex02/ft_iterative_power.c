/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:25:00 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/29 18:26:24 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	if (power < 0)
	{
		return (0);
	}
	return (i);
}

int	main(void)
{
	printf("%d",ft_iterative_power(99, 4));
	return (0);
}
