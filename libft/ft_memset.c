/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:43:46 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/23 14:44:32 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *bc;

	bc = (unsigned char *)b;
	while (n)
	{
		*bc++ = (unsigned char)c;
		n--;
	}
	return (b);
}

int main()
{
	char *tab = "Salut ca va";

	//printf("%p\n", ft_memset(tab, '$', 5));
	printf("%p\n", memset(tab, '$', 5));
	return 0;
}
