/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coltean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:38:10 by coltean           #+#    #+#             */
/*   Updated: 2015/12/15 15:56:04 by aungur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_char(char *p1, char *p2)
{
	char		*aux;

	aux = (char*)malloc(sizeof(char));
	*aux = *p2;
	*p2 = *p1;
	*p1 = *aux;
	free(aux);
}