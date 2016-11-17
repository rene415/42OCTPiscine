/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:40:45 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/12 16:40:46 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_LIST_H
# define	FT_LIST_H
# include 	<unistd.h>
# include	<stdlib.h>

typedef struct	s_stack
{
	struct s_stack	*next;
	void			*data;
}				t_stack;
