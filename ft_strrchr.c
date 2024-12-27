/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:56:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 18:54:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*int main ()
{
	const char *str = "Hello World";
	char ch = 'o';
	char *result = ft_strrchr(str, ch);
	if (result)
		printf ("Last occurrence of character '%c' found at position: %ld\n",
			ch, result-str);
	else
		printf ("character '%c' not found. \n", ch);
	result = ft_strrchr(str, '\0');
	if (result)
		printf ("Null terminator found at postion %ld\n", result - str);
	return (0);
	}*/
