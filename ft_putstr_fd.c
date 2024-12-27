/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:23:23 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 14:53:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*str;
	int		fd;

	str = "Hello";
	ft_putstr_fd(str, 1);
	fd = open("output.txt", O_WRONLY | O_CREAT , 0644);
	ft_putstr_fd(str,fd);

	close(fd);
}
*/
