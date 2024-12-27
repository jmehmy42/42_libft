/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:32:22 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 12:55:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	array = (void *)malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
/*
int main (void)
{
	int nmemb = 5;
	int i ;

	int *array = (int *)ft_calloc(nmemb, sizeof(int));
	i = 0;
	while (i < nmemb)
	{
		printf ("array[%d] = %d\n", i, array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
