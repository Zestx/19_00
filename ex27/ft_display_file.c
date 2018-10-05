/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbackaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:34:24 by qbackaer          #+#    #+#             */
/*   Updated: 2018/10/03 19:41:18 by qbackaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		zp_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	zp_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		zp_putchar(str[i]);
		i++;
	}
}

void	display(char *filename)
{
	int		fd;
	int		d;
	char	buffer[2];

	if ((fd = open(filename, O_RDONLY)) < 0)
		return ;
	while ((d = read(fd, buffer, 1)))
	{
		buffer[d] = '\0';
		zp_putstr(buffer);
	}
	if (close(fd) < 0)
		return ;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	display(argv[1]);
	return (0);
}
