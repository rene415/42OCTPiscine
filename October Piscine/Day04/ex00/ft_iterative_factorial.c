/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 14:06:06 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/29 14:06:26 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	while (nb > 0 && nb < 13)
	{
		i = i * nb;
		write(1, "a", 1);
		nb--;
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	return (i);
}

int	main(void)
{
	ft_iterative_factorial(5);
	return (0);
}
