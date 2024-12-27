/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:21:16 by marvin            #+#    #+#             */
/*   Updated: 2024/11/16 13:10:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
 int main (void)
 {
		char str1[]= "Hello World";

		printf (" Before ft_bzero %s\n", str1);

		ft_bzero (str1, 5);

		printf ("After ft_bzero %s\n", str1);

		return (0);
 }*/