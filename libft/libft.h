/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:28:32 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/29 09:35:40 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_LIBFT
#define	_LIBFT

#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

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
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strcmp(char *s1, char *s2);
int	ft_isspace(char *str);

// CHAR FUNCTION //
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcat(char	*dest, char	*src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *src, const char *find, size_t n);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

// SIZE_T FUNCTION //
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t n);

// VOID FUNCTION //
void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memchr(const void *dst, int c, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);

#endif
