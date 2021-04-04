/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:00:16 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 15:41:07 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*s1;
	size_t	j;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		s1 = malloc(sizeof(char));
		if (!(s1))
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	j = 0;
	s1 = malloc(sizeof(char) * ft_strlen(&s[start] + 1));
	if (!(s1))
		return (NULL);
	while (s[start] && j < n)
	{
		s1[j] = s[start];
		start++;
		j++;
	}
	s1[j] = 0;
	return (s1);
}
