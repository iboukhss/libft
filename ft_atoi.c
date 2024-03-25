/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:51:38 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/25 04:14:30 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	while (ft_isdigit(*nptr))
	{
		n = n * 10 + *nptr - '0';
		++nptr;
	}
	return (sign * n);
}
