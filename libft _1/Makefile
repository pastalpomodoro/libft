NAME = libft.a

FILE = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c \
ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_memset.c \
ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c \
ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c \
ft_memcpy.c ft_bzero.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \

FILEBUS = ft_lstiter ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c

OBJ = ${FILE:.c=.o}
OBJBUS = ${FILEBUS:.c=.o}

all:${NAME}

${NAME}:${OBJ} 
	ar crs ${NAME} ${OBJ}
bonus:${OBJBUS}
	ar crs ${NAME} ${OBJBUS}
clean:
	rm -f ${OBJ} ${OBJBUS}
fclean:clean
	rm -f ${NAME}
re:fclean all

.PHONY: all bonus clean fclean re
