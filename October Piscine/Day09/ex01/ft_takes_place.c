/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:16:34 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/03 19:16:35 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int y;

	y = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 1 && hour < 10)
		printf("0%d.00 A.M. AND %d.00 A.M.\n", hour, y);
	else if (hour == 10)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, y);
	else if (hour == 12)
		printf("%d.00 A.M. AND 01.00 P.M.\n", hour);
	else if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", hour, y);
	else if (hour >= 13 && hour <= 22)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, Y - 12);
	else if (hour == 23)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour - 12, Y - 12);
	else if (hour == 24)
		printf("%d.00 A.M. AND 01.00 A.M.\n", hour - 12);
	else if (hour == 0)
		printf("12.00 A.M. AND 01.00 A.M.\n");
	else
		printf("Not a valid number");
}
