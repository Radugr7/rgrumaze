/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coltean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:37:29 by coltean           #+#    #+#             */
/*   Updated: 2015/12/15 15:56:50 by aungur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_long(long *p1, long *p2)
{
	long		*aux;

	aux = (long*)malloc(sizeof(long));
	*aux = *p2;
	*p2 = *p1;
	*p1 = *aux;
	free(aux);
}
