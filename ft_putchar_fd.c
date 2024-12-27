/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:11:27 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 18:52:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int fd = open("output.txt", O_CREAT | O_WRONLY , 0644);
	ft_putchar_fd('A', fd);
	if (fd == -1)
	{
		write(2, "error", 5);
		return (1);
	}
	close(fd);

	return (0);
}*/
