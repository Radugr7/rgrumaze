/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 15:43:14 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/20 16:59:33 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t		ft_sizecuv(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0' && s[size] != c)
		size++;
	return (size);
}

static size_t		ft_countcuv(char const *s, char c)
{
	size_t	cuv;

	cuv = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			cuv++;
		s++;
	}
	return (cuv);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		sizecuv;
	size_t		nrcuv;

	if (s == NULL)
		return (NULL);
	nrcuv = ft_countcuv(s, c);
	str = malloc((nrcuv + 1) * sizeof(char**));
	i = 0;
	while (i < nrcuv && *s != '\0')
	{
		while (*s == c)
			s++;
		sizecuv = ft_sizecuv(s, c);
		str[i] = malloc((sizecuv + 1) * sizeof(char*));
		if (str[i] == NULL)
			return (NULL);
		ft_strncpy(str[i], s, sizecuv + 1);
		str[i][sizecuv] = '\0';
		s = s + sizecuv;
		i++;
	}
	str[i] = 0;
	return (str);
}
