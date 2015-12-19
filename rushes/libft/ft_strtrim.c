/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 00:12:45 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/20 17:00:52 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*copie;
	size_t	i;
	int		sf;

	if (s == NULL)
		return (NULL);
	copie = ft_strnew(ft_strlen(s));
	i = 0;
	sf = 0;
	while (i < ft_strlen(s))
		if (sf == 0 && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
			i++;
		else
		{
			copie[sf] = s[i];
			i++;
			sf++;
		}
	sf--;
	while (copie[sf] == '\n' || copie[sf] == '\t' || copie[sf] == ' ')
	{
		copie[sf] = '\0';
		sf--;
	}
	return (copie);
}
