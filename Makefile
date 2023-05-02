NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar crs
RM = rm -f
Lib_H = libft.h \

SRCS = \
    ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
    ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
    ft_strlcpy.c  ft_strlcat.c ft_toupper.c ft_tolower.c ft_atoi.c \
    ft_strncmp.c  ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c \
    ft_strdup.c ft_strchr.c ft_strrchr.c

SRCS_B = \
    ft_putchar_fd.c ft_putstr_fd.c ft_substr.c ft_strjoin.c \
    ft_strtrim.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
    ft_split.c ft_strmapi.c ft_striteri.c

OBJS = $(SRCS:%.c=%.o)
OBJS_B = $(SRCS_B:%.c=%.o)

$(NAME): $(OBJS) $(OBJS_B)
	$(AR) $@ $^

all: $(NAME)
    
bonus: $(OBJS_BONUS)
	$(AR) $(NAME) $^
    
clean:
	$(RM) $(OBJS) $(OBJS_B) $(OBJS_BONUS)
    
fclean: clean
	$(RM) $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS) $(SRCS_B)
	gcc -shared -o libft.so $(OBJ) $(OBJ_B)