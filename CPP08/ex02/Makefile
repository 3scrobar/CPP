# ===========================
#        CONFIGURATION
# ===========================

NAME        = Span

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -g -Iinclude
LDFLAGS     =

SRC_DIR     = src
OBJ_DIR     = obj

# Sans wildcard (*), récursif
SRC := $(shell find $(SRC_DIR) -type f | grep '\.cpp$$' | sort)
OBJ  = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEP  = $(OBJ:.o=.d)

# ===========================
#          UI
# ===========================

GREEN   = \033[32m
YELLOW  = \033[33m
BLUE    = \033[36m
RED     = \033[31m
RESET   = \033[0m

CHECK   = ✅
HAMMER  = 🔨
LINK    = 🔗
BROOM   = 🧹
TRASH   = 🗑️
ROCKET  = 🚀

# ===========================
#          REGLES
# ===========================

.PHONY: all clean fclean re run val gdb

all: $(NAME)
	@printf "$(GREEN)$(CHECK) Compilation terminée avec succès !$(RESET)\n"

$(NAME): $(OBJ)
	@printf "$(BLUE)$(LINK) Édition des liens → $(NAME)$(RESET)\n"
	@$(CXX) $(LDFLAGS) -o $@ $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)$(HAMMER) Compilation de %s$(RESET)\n" "$<"
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

run: $(NAME)
	@printf "$(ROCKET) Lancement du programme...$(RESET)\n"
	@./$(NAME) $(ARGS)

val: $(NAME)
	@printf "$(HAMMER) Lancement du programme avec valgrind$(RESET)\n"
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) $(ARGS)

gdb: $(NAME)
	@printf "$(LINK) Lancement du programme avec gdb$(RESET)\n"
	@gdb -tui ./$(NAME)

clean:
	@printf "$(BROOM) Suppression des fichiers objets...$(RESET)\n"
	@rm -rf $(OBJ_DIR)

fclean:
	@printf "$(TRASH) Suppression de l’exécutable et des objets...$(RESET)\n"
	@rm -rf $(OBJ_DIR) $(NAME)

re: fclean all

-include $(DEP)
