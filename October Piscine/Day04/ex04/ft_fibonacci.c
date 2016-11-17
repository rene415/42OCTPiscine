/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 20:05:12 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/29 20:05:14 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index > 1 && index < 48)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index < 0)
	{
		return (-1);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n",ft_fibonacci(-1));
	printf("%d\n",ft_fibonacci(15));
	printf("%d\n",ft_fibonacci(3));
	printf("%d\n",ft_fibonacci(0));
	printf("%d\n",ft_fibonacci(46));
	return (0);
}
