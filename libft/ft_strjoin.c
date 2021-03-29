/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:20:23 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/29 13:57:18 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	if ((!s1 && !s2) || (!s1 || !s2))
		return (NULL);
	result = malloc(sizeof(char) * size);
	if (!(result))
		return (NULL);
	result = ft_strcpy(result, (char *)s1);
	result = ft_strcat(result, (char *)s2);
	return (result);
}
