/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 19:18:41 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/29 19:18:43 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{	
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d",ft_recursive_power(2, 3));
	return (0);
}
