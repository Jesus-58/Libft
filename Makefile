CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c \
		ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c \
		ft_putnbr_fd.c ft_strmapi.c ft_substr.c ft_split.c \

# Object files
OBJS = $(SRCS:.c=.o)

# Library name
NAME = libft.a

# Build rule
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created"

# Object file rule
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned"

# Clean and remove library rule
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed"

# Rebuild rule
re: fclean all

.PHONY: all clean fclean re