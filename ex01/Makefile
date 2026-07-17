# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/12 13:42:28 by schouite          #+#    #+#              #
#    Updated: 2026/07/16 17:35:30 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ARGUMENTS

NAME = MyAwesomePhoneBook
CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

## DIR

INCLUDES = -Iincludes
SRC_DIR = src
OBJ_DIR = obj

## FILES

HEADER = includes/Contact.hpp includes/PhoneBook.hpp
CFILES = $(SRC_DIR)/main.cpp $(SRC_DIR)/Contact.cpp $(SRC_DIR)/PhoneBook.cpp
OFILES = $(CFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

## RULES

all : $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re