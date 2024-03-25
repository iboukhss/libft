/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:51:10 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/25 01:40:48 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	litlen;

	litlen = ft_strlen(little);
	if (!litlen)
		return ((char *)big);
	while (len >= litlen && *big)
	{
		if (!ft_strncmp(big, little, litlen))
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
