NAME = libftprintf.a

LIBFT_PATH = libft

SCRS = ft_print_base10.c\
ft_print_char.c\
ft_print_string.c\
ft_printf.c\
ft_put_uns_char_fd.c\
ft_print_lower_hex.c\
ft_print_upper_hex.c\
ft_print_uns_base10.c\
ft_itoa_uns.c\

OBJS = $(SCRS:.c=.o)

RM = rm -rf

HEADER = ft_printf.h

STATIC_LIB = ar rcs

MOVE_LIB = (mv $(LIBFT_PATH)/libft.a $(NAME))

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(MAKE) bonus -C $(LIBFT_PATH)
	$(MOVE_LIB)
	$(STATIC_LIB) $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C $(LIBFT_PATH)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean
	$(MAKE) all

.Phony: all clean fclean re