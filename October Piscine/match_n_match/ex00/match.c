/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:02:53 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/05 15:02:54 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 != 0 && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (*s1 == 0 && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 == *s2 && *s2 != 0 && *s1 != 0)
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == *s2)
		return (1);
	else
		return (0);
}
