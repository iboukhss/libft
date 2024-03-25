/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:18:39 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/25 00:18:36 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	n;

	srclen = ft_strlen(src);
	if (size)
	{
		n = srclen;
		if (n > size - 1)
			n = size - 1;
		while (n--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (srclen);
}
