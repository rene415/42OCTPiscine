/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 20:53:29 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/06 20:53:30 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 != 0 && *s2 == '*')
		return ((match(s1 + 1, s2)) + (match(s1, s2 + 1)));
	else if (*s1 == 0 && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 == *s2 && *s2 != 0 && *s1 != 0)
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == *s2)
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	else
		printf("%d", match(argv[1], argv[2])); 
}
