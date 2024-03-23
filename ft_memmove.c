/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:13:26 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/23 02:48:34 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (dest < src)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
