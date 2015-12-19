/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 01:47:58 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/20 16:56:16 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		nr_cif(long n)
{
	int nr;

	nr = 0;
	if (n < 0)
	{
		nr++;
		n = -n;
	}
	if (n == 0)
		nr = 1;
	else
		while (n > 0)
		{
			nr++;
			n /= 10;
		}
	return (nr);
}

char	*ft_itoa(int n)
{
	long	copie;
	char	*x;
	int		i;
	int		t;

	copie = n;
	t = 0;
	if (copie < 0)
	{
		t = 1;
		copie = -copie;
	}
	x = (char *)malloc(sizeof(char) * 20);
	x[0] = '0';
	x[nr_cif(n)] = '\0';
	i = nr_cif(n) - 1;
	while (copie != 0)
	{
		x[i] = copie % 10 + '0';
		i--;
		copie /= 10;
	}
	if (t)
		x[i] = '-';
	return (x);
}
