/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pgcd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acovaciu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 16:16:56 by acovaciu          #+#    #+#             */
/*   Updated: 2015/11/20 16:16:59 by acovaciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pgcd(int a, int b)
{
	int	r;

	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return (a);
}
