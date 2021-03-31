/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:20:21 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/30 17:33:11 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charset(char *c, char *set)
{
	while (c)
	{
		if (c == set)
			return (1);
		c++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char *scpy;
	char *scpyresult

	scpy = (char *)s;
	while (charset(scpy, c))
		scpy++;
}
