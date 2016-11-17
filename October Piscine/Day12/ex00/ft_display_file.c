/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:18:24 by rramirez          #+#    #+#             */
/*   Updated: 2016/11/10 14:18:27 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int		main(int argc, char **argv)
{
	int fd;
	char buf[BUF_SIZE + 1];
	int ret;

	if (argc > 2)
		ft_derror("Too Many arguments.\n");
	else if (argc < 2)
		ft_derror("File name missing.\n");
	else if (argc == 2)
	{	
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	return (0);
}
