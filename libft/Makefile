NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = cc 

SRCS = ft_atoi.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memcmp.c ft_strtrim.c \
		ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strcmp.c \
		ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_substr.c  \
		ft_tolower.c ft_toupper.c ft_bzero.c ft_memcpy.c ft_strlcat.c ft_memmove.c ft_memchr.c ft_strmapi.c  \
		ft_strrchr.c ft_strlcpy.c ft_striteri.c get_next_line.c ft_printf.c ft_print_str.c ft_print_unsigned_decimal.c \
		ft_print_pointer.c ft_print_percent.c ft_print_integer.c ft_print_hex.c ft_print_decimal.c ft_print_char.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstiter.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS) $(BONUS_SRCS)
	cc -shared -o libft.so $(OBJS) $(BONUS_OBJS)

