CC = gcc
CFLAGS = -Wall -Werror -Wextra -I
SRC =  # Ajouter chaque fichier en .c ici manuellement
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