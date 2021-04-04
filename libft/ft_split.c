/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:20:21 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 15:46:52 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char *str, char c)
{
	int	state;
	int	nb_w;

	enum e_state
	{
		OUTSIDE,
		INSIDE
	};
	state = OUTSIDE;
	nb_w = 0;
	while (*str)
	{
		if (*str == c)
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

static int	countletter(char *s, char c)
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

static char	*copy(char const *s, char c, int k)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	word = malloc(sizeof(char) * countletter((char *)s, c) + 1);
	if (!word)
		return (NULL);
	while (s[i] == c)
		i++;
	while (k)
	{
		if (s[i] == c && s[i + 1] != c)
			k--;
		i++;
	}
	while (s[i] && s[i] != c)
	{
		word[j] = s[i];
		j++;
		i++;
	}
	word[j] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**splitted;
	unsigned int	j;
	unsigned int	nb_w;

	j = 0;
	if (!s)
		return (NULL);
	nb_w = countword((char *)s, c);
	splitted = (char **)malloc(sizeof(char *) * nb_w + 2);
	if (!splitted)
		return (NULL);
	while (j < nb_w)
	{
		splitted[j] = copy(s, c, j);
		if (!splitted[j])
		{
			free(splitted);
			return (NULL);
		}
		j++;
	}
	splitted[j] = 0;
	return (splitted);
}
