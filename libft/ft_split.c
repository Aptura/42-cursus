/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:20:21 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/31 14:37:44 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_ischarset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	countword(char *str, char c)
{
	enum	e_state
	{
		OUTSIDE,
		INSIDE
	};
	int	state;
	int	nb_w;

	state = OUTSIDE;
	nb_w = 0;
	while (*str)
	{
		if (ft_ischarset(*str, c))
			state = OUTSIDE;
		else if (state == OUTSIDE)
		{
			state = INSIDE;
			++nb_w;
		}
		str++;
	}
	return (nb_w);
}

static int	countletter(char *s, char c) // compte les lettres mais pas 'c'
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] == c || s[j])
	{
		if (s[i] != c)
			count++;
		i++;
		j++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int j;
	int	nb_w;
	int	nb_l;
	char	**scpy;

	i = 0;
	j = 0;
	nb_w = countword((char *)s, c);
	nb_l = countletter((char *)s, c);
	scpy = malloc(sizeof(char) * nb_w + nb_l + 1);
	if (!scpy)
		return (NULL);
	while (s[i] || (i < nb_w || j < nb_l))
	{
		scpy[i][j] = s[i];
		i++;
		j++;
	}
	printf("%d & %d\n", nb_w, nb_l);
	return ((char **)scpy);
}

int main()
{
	char tab[] = "Salut ca va";
	char c = ' ';

	ft_split(tab, c);
	return 0;
}
