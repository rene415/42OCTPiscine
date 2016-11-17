/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:23:46 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/13 15:56:18 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(void)
{
	int		count;
	int		ret;
	char	*mem;
	char	buf[BUF_SIZE + 1];

	count = 1;	
	mem = (char *)malloc(BUF_SIZE);
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		*mem = buf[0];
		count++;
	}
	mem[count] = '\0';
	ft_putstr(mem);
	ft_match(*mem)
	return (0);
}
