/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 17:48:13 by acovaciu          #+#    #+#             */
/*   Updated: 2015/10/24 18:34:22 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)(malloc(sizeof(str) * size + 1));
	if (str == NULL)
		return (NULL);
	while (size != 0)
	{
		str[size] = '\0';
		size--;
	}
	return (str);
}
