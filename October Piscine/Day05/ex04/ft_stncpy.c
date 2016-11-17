/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 20:04:06 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/31 20:04:08 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			i++;
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		if (src[i] != '\0')
		{
			i++;
		}
	}
	return (dest);
}
