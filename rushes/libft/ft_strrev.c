/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coltean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:24:58 by coltean           #+#    #+#             */
/*   Updated: 2015/12/17 18:35:56 by coltean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char		*new_str;
	size_t		size;
	int			i;

	size = ft_strlen(str) - 1;
	new_str = (char*)malloc(sizeof(char) * (size + 2));
	i = 0;
	while (str[i] != '\0')
	{
		new_str[i] = str[size];
		i++;
		size--;
	}
	new_str[i] = '\0';
	return (new_str);
}
