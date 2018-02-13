/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:09:36 by snadaras          #+#    #+#             */
/*   Updated: 2017/11/16 13:22:25 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(int fd)
{
	char buffer;

	while (read(fd, &buffer, 1) != 0)
		write(STDOUT_FILENO, &buffer, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		if (argc > 2)
			write(STDERR_FILENO, "Too many arguments.\n", 20);
		if (argc < 2)
			write(STDERR_FILENO, "File name missing.\n", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	display_file(fd);
	close(fd);
	return (0);
}
