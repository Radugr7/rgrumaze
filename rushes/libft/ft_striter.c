/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 19:15:10 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/14 17:10:07 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			f(s + i);
			i++;
		}
	}
}
