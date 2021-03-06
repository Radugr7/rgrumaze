/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coltean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:37:56 by coltean           #+#    #+#             */
/*   Updated: 2015/12/15 15:56:22 by aungur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_int(int *p1, int *p2)
{
	int		*aux;

	aux = (int*)malloc(sizeof(int));
	*aux = *p2;
	*p2 = *p1;
	*p1 = *aux;
	free(aux);
}
