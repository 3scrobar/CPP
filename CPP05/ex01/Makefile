# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/09 14:59:22 by tle-saut          #+#    #+#              #
#    Updated: 2025/09/29 13:45:11 by tle-saut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= Burocrat

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -g -Iinclude

SRC_DIR		= src
OBJ_DIR		= obj

SRC			= $(wildcard $(SRC_DIR)/*.cpp)
OBJ			= $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

ARGS ?=

all: $(NAME)
	@echo "............Compilation terminer............."

$(NAME): $(OBJ)
	@echo ".............Compilation final en cours............"
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJ)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	@echo "..........Creation du dossier OBJ............"
	@mkdir -p $(OBJ_DIR)
	@echo ".............Compilation des OBJ............"


run: all
	@echo "Running: ./$(NAME) $(ARGS)"
	@./$(NAME) $(ARGS)

clean:
	@echo "............Destruction OBJ..................."
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "...........Destruction executable............."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re run
