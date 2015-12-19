/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 10:27:52 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/13 16:56:55 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char*)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j])
		{
			if (j == size - 1)
				return ((char*)s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
