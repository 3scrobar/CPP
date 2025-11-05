# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-saut <tle-saut@student.42perpignan>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 13:55:00 by tle-saut          #+#    #+#              #
#    Updated: 2025/10/28 16:11:39 by tle-saut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ===========================
#        CONFIGURATION
# ===========================

NAME        = find

# Compilateur et flags
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -g -Iinclude

# Dossiers
SRC_DIR     = src
OBJ_DIR     = obj

# Récupération des fichiers .cpp via "find" (pas de wildcard)
SRC := $(shell find $(SRC_DIR) -type f | grep '\.cpp$$' | sort)
OBJ         = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEP         = $(OBJ:.o=.d)

# ===========================
#         COMMANDES
# ===========================

GREEN   = \033[32m
YELLOW  = \033[33m
BLUE    = \033[36m
RED     = \033[31m
RESET   = \033[0m

ROBOT   = 🤖
HAMMER  = 🔨
FIRE    = 🔥
BROOM   = 🧹
CHECK   = ✅
TRASH   = 🗑️
LINK    = 🔗
ROCKET  = 🚀

# ===========================
#          REGLES
# ===========================

.PHONY: all clean fclean re run

# ----- Compilation principale -----
all: $(NAME)
	@echo "$(GREEN)$(CHECK) Compilation terminée avec succès !$(RESET)"

# ----- Edition des liens (création de l’exécutable) -----
$(NAME): $(OBJ)
	@echo "$(BLUE)$(LINK) Édition des liens → $(NAME)$(RESET)"
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

# ----- Compilation des .cpp en .o -----
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@echo "$(YELLOW)$(HAMMER) Compilation de $<$(RESET)"
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# ----- Dossier obj -----
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# ----- Lancer le programme -----
run: $(NAME)
	@echo "$(ROCKET) Lancement du programme...$(RESET)"
	@./$(NAME) $(ARGS)

# ----- Nettoyage des fichiers objets -----
clean:
	@echo "$(BROOM) Suppression des fichiers objets...$(RESET)"
	@rm -rf $(OBJ_DIR)

# ----- Suppression complète -----
fclean:
	@echo "$(TRASH) Suppression de l’exécutable et des objets...$(RESET)"
	@rm -rf $(OBJ_DIR) $(NAME)

# ----- Recompilation complète -----
re: fclean all

# Inclusion des dépendances automatiques (ne relink pas inutilement)
-include $(DEP)

# ===========================
#         FIN DU FICHIER
# ===========================
