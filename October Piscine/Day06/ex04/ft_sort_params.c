/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:22:11 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/02 20:22:13 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstring(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcomp(char *s1, char *s2)
{
	int 	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return(s1[i] - s2[i]);
}
void	swaps(char *s1, char *s2)
{
	int middleman;

	middleman = *s1;
	*s1 = *s2;
	*s2 = middleman;
}
int 	main(int argc, char **argv)
{
	
}