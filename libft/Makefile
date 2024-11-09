NAME = libft
NAMEDIR = libft.a
CC = cc
FLAG = -Wall -Werror -Wextra -g3

FILE = ft_putnbr_fd ft_putendl_fd ft_putstr_fd ft_putchar_fd ft_striteri ft_strmapi ft_itoa ft_split ft_strtrim ft_strjoin ft_substr ft_memset ft_strdup ft_calloc ft_atoi ft_strnstr ft_memcmp ft_memchr ft_strncmp ft_strrchr ft_strchr ft_tolower ft_toupper ft_strlcat ft_strlcpy ft_memmove ft_memcpy ft_bzero ft_strlen ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint main

gg:all clean

all:${NAME}
	ar crs ${NAMEDIR} ${FILE:%=%.o}

${NAME}:${FILE}
	@ ${CC} ${FLAG} -o ${NAME} ${FILE:%=%.o}

${FILE}:
	${CC} -c ${FLAG} fonctions/$@.c -Ifonctions/
clean:
	rm -f ${FILE:%=%.o}
fclean:clean
	rm -f ${NAME} ${NAMEDIR}
re:fclean all
.PHONY: all clean fclean re
