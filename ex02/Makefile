# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/12 13:42:28 by schouite          #+#    #+#              #
#    Updated: 2026/09/20 18:26:08 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ARGUMENTS

NAME = Account
CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

## DIR

INCLUDES = -Iincludes
SRC_DIR = src
OBJ_DIR = obj

## FILES

HEADER = includes/Account.hpp
CFILES = $(SRC_DIR)/tests.cpp $(SRC_DIR)/Account.cpp
OFILES = $(CFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

## RULES

all : $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re