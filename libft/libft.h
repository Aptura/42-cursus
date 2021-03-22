#ifndef __LIBFT
#define __LIBFT

// INT FUNCTION //
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_strlen(char *str);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *nptr);
int	ft_isalnum(int c);

// CHAR FUNCTION //
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

// VOID FUNCTION //

#endif