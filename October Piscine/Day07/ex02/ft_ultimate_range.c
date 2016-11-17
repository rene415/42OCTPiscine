/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:10:06 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/03 18:10:07 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*rang;

	i = min;
	if (min < max)
	{
		rang = (int*)malloc(sizeof(int) * (max - min));
	}
	else
		return (0);
	while (i != max)
	{
		rang[i - min] = i;
		i++;
	}
	*range = rang;
	return (max - min);
}
