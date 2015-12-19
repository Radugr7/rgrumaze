/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 17:36:20 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/06 17:39:45 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void		*memory;
	size_t		i;

	i = 0;
	if (!(memory = (void*)malloc(sizeof(void) * size)) || !size)
		return (NULL);
	while (i < size)
	{
		*(unsigned char*)(memory + i) = 0;
		i++;
	}
	return (memory);
}
