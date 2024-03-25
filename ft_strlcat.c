/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:19:22 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/25 17:20:46 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	n;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size > dstlen)
	{
		n = srclen;
		if (n > size - dstlen - 1)
			n = size - dstlen - 1;
		dst += dstlen;
		while (n--)
		{
			*dst = *src;
			++dst;
			++src;
		}
		*dst = '\0';
		return (dstlen + srclen);
	}
	return (size + srclen);
}
