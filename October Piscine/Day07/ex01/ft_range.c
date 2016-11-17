/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:26:07 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/03 14:30:43 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	i = min;
	if (min < max)
	{
		range = (int*)malloc(sizeof(int) * (max - min));
	}
	else
		return (0);
	while (i != max)
	{
		range[i - min] = i;
		i++;
	}
	range[i] = '\0';
	return (range);
}
