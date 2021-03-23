/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:46:31 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/23 14:08:32 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	char	*i;
	size_t	j;

	j = 0;
	i = 0;
	if (find == 0)
		return ((const)src);
	while (src[j] && j < n)
	{
		if (*src == *find)
			i = *src;
		i++;
		j++;
		src++;
	}
	return (i);
}

int main()
{
	const char tab[] = "Salut";
	const char tab2[] = "lu";

	printf("%s\n", ft_strnstr(tab, tab2, 5));
	return 0;
}
