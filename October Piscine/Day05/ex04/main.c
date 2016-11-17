/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 08:17:59 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/31 08:26:26 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *str, unsigned int n);

int	 main()
{
	char dest [] = "";
	char src [] = "burritos";
	printf("%s\n", ft_strncpy(dest, src, 3));
	return(0);
}

