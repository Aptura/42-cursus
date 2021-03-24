CC = gcc
CFLAGS = -Wall -Werror -Wextra -I.
SRC =	ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_memccpy.c \

OBJ = $(SRC:.c=.o) # Prend la variable source pour convertir l'extension de mes .c en .o
EXEC = libft.a
RM = rm -f

all : $(EXEC)

%.o : %.c # "%" permet de prendre tout les fichier .o et .c
	$(CC) $(CFLAGS) -o $@ -c $^

$(EXEC) : $(OBJ) # Commande qui récuppère le nom cible, les objets et qui compile pour créer ma libft.a
	ar -rcs $@ $(OBJ)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(EXEC)

re : fclean all

.PHONY: all clean fclean re
