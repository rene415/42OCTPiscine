/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:04:30 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/08 10:04:35 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		addthree(int nb)
{
	nb = nb + 3;
	return(nb);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * (length));
	while(i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
		return (arr);
}

int 	main(void)
{
	int tab[] = {3, 4, 5, 6, 7};
	int *arr = ft_map(tab, 5, addthree);

	int i = 0;
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
