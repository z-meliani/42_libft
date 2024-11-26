# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 10:30:11 by zmeliani          #+#    #+#              #
#    Updated: 2024/11/19 16:41:39 by zmeliani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
SRCS := $(addprefix $(SRCSDIR), $(SRCS))

OBJSDIR =
OBJS = $(SRCS:$(SRCSDIR)%.c=%.o)
OBJS := $(addprefix $(OBJSDIR), $(OBJS))

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstsize_bonus.c
BONUS := $(addprefix $(BONUSDIR), $(BONUS))

OBJSBDIR = $(OBJSDIR)
OBJSB = $(BONUS:$(BONUSDIR)%.c=%.o)
OBJSB := $(addprefix $(OBJSBDIR), $(OBJSB))

AR = ar
ARFLAGS = crs

CC = cc -g
CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

NAME = libft.a

all : $(NAME)

$(OBJSDIR)%.o : %.c | $(OBJSDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJSDIR) :
	mkdir -p $@

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS) $(OBJSB)
	$(AR) $(ARFLAGS) $(NAME) $^

test : test.c $(OBJS) $(OBJSB)
#	@echo "Test compiled"
	@$(CC) $(CFLAGS) -o $@ $^

clean :
	@$(RM) $(OBJSDIR) *.o test

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re test