/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:36:04 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/04 15:36:05 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'j')
			str[i] = str[i] + 16;
		else if (str[i] <= 'z' && str[i] >= 'k')
			str[i] = str[i] - 10;
		else if (str[i] >= 'A' && str[i] <= 'J')
			str[i] = str[i] + 16;
		else if (str[i] <= 'Z' && str[i] >= 'K')
			str[i] = str[i] - 10;
		else
			return (0);
		i++;
	}
	return (str);
}
int main(int ac, char **av)
{
	char *str;

	if (ac != 2)
	{
		putchar('\n');
	}
	else
		ft_putstr(ft_rot42(av[1]));
}