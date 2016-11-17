/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 17:55:19 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/29 17:55:39 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
		return (0);
}

int	main ()
{
	printf("%d" , ft_recursive_factorial(5));
	return (0);
}
