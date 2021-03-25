/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:46:31 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/25 16:03:56 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	char	*i;
	size_t	j;

	j = 0;
	i = 0;
	if (!*find)
		return ((char *)src);
	while (*src && src[j] && j < n)
	{
		if (*src == *find)
			i = (char *)src;
		else
			return (NULL);
		i++;
		j++;
		src++;
	}
	return (i);
}
