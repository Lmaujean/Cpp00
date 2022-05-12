# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 12:34:38 by lmaujean          #+#    #+#              #
#    Updated: 2022/05/11 12:34:39 by lmaujean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src      := PhoneBook.cpp Contact.cpp Main.cpp
inc      :=
obj      := $(src:%.cpp=%.o)
NAME     := phonebook
CXX      := g++
CXXFLAGS := -I$(inc)
CFLAGS   := -std=c++98 -Wall -Wextra -Werror
.PHONY: all NAME
all: $(NAME)
$(NAME): $(obj)
	$(CXX) $^ $(LDFLAGS) -o $@
%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(CFLAGS) -c $< -o $@
.PHONY: clean fclean re
clean:
	$(RM) $(obj)
fclean: clean
	$(RM) $(NAME)
re: fclean all
