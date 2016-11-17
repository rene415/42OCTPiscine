/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:17:09 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/03 11:17:10 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		leng;
	char	*memory;

	i = 0;
	leng = ft_strlen(src);
	memory = (char*)malloc(sizeof(*src) * (leng + 1));
	while (src[i] != '\0')
	{
		memory[i] = src[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
