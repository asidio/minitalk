CC = gcc
CFLAGS += -Wall -Wextra -Werror -Iinclude
AR = ar

NAME = libft.a

HEADER = src/ft_printf.h
LIBFT_HEADER = src/libft.h

SRC_LIBFT=	src/ft_atoi.c \
			src/ft_bzero.c \
			src/ft_calloc.c \
			src/ft_isalnum.c \
			src/ft_isalpha.c \
			src/ft_isascii.c \
			src/ft_isdigit.c \
			src/ft_isprint.c \
			src/ft_itoa.c \
			src/ft_memccpy.c \
			src/ft_memchr.c \
			src/ft_memcmp.c \
			src/ft_memcpy.c \
			src/ft_memmove.c \
			src/ft_memset.c \
			src/ft_putchar_fd.c \
			src/ft_putendl_fd.c \
			src/ft_putnbr_fd.c \
			src/ft_putstr_fd.c \
			src/ft_split.c \
			src/ft_strchr.c \
			src/ft_strdup.c \
			src/ft_strjoin.c \
			src/ft_strlcat.c \
			src/ft_strlcpy.c \
			src/ft_strlen.c \
			src/ft_strmapi.c \
			src/ft_strncmp.c \
			src/ft_strnstr.c \
			src/ft_strrchr.c \
			src/ft_strtrim.c \
			src/ft_substr.c \
			src/ft_tolower.c \
			src/ft_toupper.c

SRC		 =	 src/ft_common.c src/ft_printptr.c src/ft_printhex.c src/ft_unsigned.c src/ft_printf.c

DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
RED = \033[0;91m
BLUE = \033[0;94m

OBJS = $(SRC:.c=.o)
OBJS_LIBFT = $(SRC_LIBFT:.c=.o)



all: $(NAME)

$(NAME): comp libft $(OBJS) $(HEADER) $(LIBFT_HEADER)
	@$(AR) -rcs $(NAME) $(OBJS)
	@echo "$(GREEN)compiled$(DEF_COLOR)"

comp: 
	@echo "$(BLUE)compiling libft...$(DEF_COLOR)"

libft: 	$(OBJS_LIBFT) $(LIBFT_HEADER)
	@$(AR) -rcs $(NAME) $(OBJS_LIBFT)

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@rm -f $(OBJS_LIBFT)
	@echo "$(RED)object files cleaned$(DEF_COLOR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)executable files cleaned$(DEF_COLOR)"

re: fclean all
	@echo "$(BLUE)cleaned and rebuilt everything$(DEF_COLOR)"

.PHONY: all clean fclean re libft
