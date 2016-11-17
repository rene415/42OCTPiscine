/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:53:40 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/09 18:53:43 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begins_list, void *data)
{
	t_list *actual;

	actual = begins_list;
	while (actual->next != NULL)
	{
		actual = actual->next;
	}
	actual->next = ft_create_elem(data);
	actual->next->data = data;
	actual->next->next = NULL;
}
