/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:32:15 by iboukhss          #+#    #+#             */
/*   Updated: 2024/03/29 14:12:14 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_tokens(char const *s, char c)
{
	size_t	count;
	int		token;

	count = 0;
	token = 0;
	while (*s)
	{
		if (*s == c)
			token = 0;
		else if (!token)
		{
			token = 1;
			++count;
		}
		++s;
	}
	return (count);
}

static void	free_tokens(char **tokens, size_t n)
{
	while (n--)
		free(tokens[n]);
	free(tokens);
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	size_t		i;
	const char	*start;
	char		**tokens;

	count = count_tokens(s, c);
	tokens = ft_calloc(count + 1, sizeof(*tokens));
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			++s;
		start = s;
		while (*s && *s != c)
			++s;
		tokens[i] = ft_substr(start, 0, s - start);
		if (!tokens[i])
		{
			free_tokens(tokens, i);
			return (NULL);
		}
		++i;
	}
	return (tokens);
}
