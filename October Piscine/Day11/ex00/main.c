/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:53:00 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/09 17:53:02 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int	main(void)
{
	char str[] = "testing";
	t_list *test = ft_create_elem(&str);

	printf("testing\n");
	printf("%s\n",(*test).data);

	return 0;
}