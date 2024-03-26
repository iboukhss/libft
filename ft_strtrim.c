/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:31:55 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/26 13:55:50 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*str;

	start = s1;
	while (ft_strchr(set, *start) && *start)
		++start;
	end = start;
	while (!ft_strchr(set, *end) && *end)
		++end;
	str = ft_substr(s1, start - s1, end - start);
	if (!str)
		return (NULL);
	return (str);
}
