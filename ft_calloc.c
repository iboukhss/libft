/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:52:56 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/25 04:46:39 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > (size_t)-1 / size && size)
		return (NULL);
	size *= nmemb;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, size));
}
