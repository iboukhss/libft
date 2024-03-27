/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:31:55 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/26 18:49:57 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	char		*str;

	while (ft_strchr(set, *s1) && *s1)
		++s1;
	start = s1;
	while (!ft_strchr(set, *s1) && *s1)
		++s1;
	str = ft_substr(start, 0, s1 - start);
	if (!str)
		return (NULL);
	return (str);
}
