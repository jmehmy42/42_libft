/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin < marvin@42.fr >                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:24:19 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 13:24:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_num(int num)
{
	int	count;

	count = 0;
	if (num <= 0)
		count++;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		length;
	long	num;

	num = n;
	length = ft_count_num(num);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	i = length - 1;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	str[i] = num + '0';
	return (str);
}
/*
int main()
{
    int num = -12345;
    printf ("%s\n", ft_itoa(num));

    return 0;
}
*/