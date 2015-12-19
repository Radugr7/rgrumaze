/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 13:40:15 by acovaciu          #+#    #+#             */
/*   Updated: 2015/10/24 13:46:41 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		dim;
	int		i;

	i = 0;
	dim = 0;
	while (s1[dim])
		dim++;
	str = (char*)malloc(sizeof(str) * (dim));
	while (i < dim)
	{
		str[i] = s1[i];
		i++;
	}
	str[dim] = '\0';
	return (str);
}
