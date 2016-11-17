/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 21:44:24 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/29 21:44:26 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 2147395600)
	{
		return(0);
	}
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	main()
{
	printf("%d\n",ft_sqrt(-1));
	printf("%d\n",ft_sqrt(15));
	printf("%d\n",ft_sqrt(25));
	printf("%d\n",ft_sqrt(0));
	printf("%d\n",ft_sqrt(46));
	return (0);
}
