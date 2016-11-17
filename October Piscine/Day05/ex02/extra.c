/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 11:38:06 by rramirez          #+#    #+#             */
/*   Updated: 2016/10/31 11:38:07 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ngckeck(int neg, int nb)
{
	if (neg == '1')
	{
		return (nb * -1);
	}
	if (neg > 1)
		return (0);
	else
	return (nb);
}

int	ft_atoi(char *str)

{
	int i;
	int neg;
	int nb;

	neg = 0;
	i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		i++;
	}
	if (str[i] == '-')
	{
		neg++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10 + (str[i] - '0');
		i++;
	}
	ft_ngckeck(neg, nb)
	
}