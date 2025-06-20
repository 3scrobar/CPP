# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 14:59:22 by tle-saut          #+#    #+#              #
#    Updated: 2025/06/20 16:54:51 by tle-saut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= harl

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -g -Iinclude

SRC_DIR		= src
OBJ_DIR		= obj

SRC			= $(wildcard $(SRC_DIR)/*.cpp)
OBJ			= $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

ARGS ?=

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

run: all
	@echo "Running: ./$(NAME) $(ARGS) \n\n\n"
	@./$(NAME) $(ARGS)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run
