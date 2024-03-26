/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:32:43 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/26 15:49:39 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	count;

	count = 1;
	if (n < 0)
		++count;
	while (n / 10)
	{
		n /= 10;
		++count;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		neg;
	char	*str;

	neg = 0;
	len = count_digits(n);
	str = ft_calloc(len + 1, sizeof(*str));
	if (!str)
		return (NULL);
	if (n < 0)
		neg = 1;
	else
		n = -n;
	while (len--)
	{
		str[len] = '0' - (n % 10);
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
