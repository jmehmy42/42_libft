/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:17:08 by marvin            #+#    #+#             */
/*   Updated: 2024/11/19 17:49:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			len;
	unsigned char	*str;

	len = 0;
	str = (unsigned char *)s;
	while (len < n)
	{
		str[len] = (unsigned char)c;
		len++;
	}
	return (str);
}
/*
int main (void)
{
	char str1[]= "Hello World";

	printf (" Before ft_memset %s\n", str1);

	ft_memset (str1, '*', 5);

	printf ("After ft_memset %s\n", str1);

	return (0);
}*/