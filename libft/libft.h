/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:28:32 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/24 12:36:21 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_LIBFT
#define	_LIBFT

#include <stddef.h>
#include <string.h>

// INT FUNCTION //
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *nptr);
int	ft_isalnum(int c);

// CHAR FUNCTION //
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

// SIZE_T FUNCTION //
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// VOID FUNCTION //
void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif
