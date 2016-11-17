/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 23:50:15 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/31 23:50:16 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i] != to_find[a] && str[i] != '\0')
	{
		i++;
		while (str[i] == to_find[a])
		{
			while (str[i++] == to_find[a++])
			{
				if (to_find[a] == '\0')
				{
					i = i - a;
					return (&str[i]);
				}
			}
			a = 0;
		}
	}
	return (0);
}
