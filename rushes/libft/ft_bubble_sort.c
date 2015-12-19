/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coltean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:47:01 by coltean           #+#    #+#             */
/*   Updated: 2015/12/15 15:51:11 by aungur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubble_sort(int *array, int size, char flag)
{
	int		ok;
	int		i;

	ok = 1;
	while (ok == 1)
	{
		ok = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (array[i] < array[i + 1] && flag == 'a')
			{
				ft_swap_int(&array[i], &array[i + 1]);
				ok = 1;
			}
			else if (array[i] > array[i + 1] && flag == 'd')
			{
				ft_swap_int(&array[i], &array[i + 1]);
				ok = 1;
			}
			i++;
		}
	}
}
