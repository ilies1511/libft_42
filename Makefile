NAME := libft.a
.DEFAULT_GOAL := all
CC := cc
AR := ar
RM := rm -rf

################################################################################
###############                  DIRECTORIES                      ##############
################################################################################

OBJ_DIR := _obj
INC_DIRS := . mini_garbage_collector
SRC_DIRS := . mini_garbage_collector

# Tell the Makefile where headers and source files are
vpath %.h $(INC_DIRS)
vpath %.c $(SRC_DIRS)

################################################################################
###############                  SOURCE FILES                     ##############
################################################################################

SRCS := ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c \
		ft_free_2d.c ft_atod.c ft_free.c ft_count_word.c

BONUS_SRCS := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

GNL_SRCS := get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

GC_SRCS := mini_garbage_collector/gb_garbage_collector.c mini_garbage_collector/gb_utils.c mini_garbage_collector/at_exit.c

SRCS += $(BONUS_SRCS) $(GC_SRCS) $(GNL_SRCS)

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))
BONUS_OBJS := $(addprefix $(OBJ_DIR)/, $(BONUS_SRCS:%.c=%.o))
GNL_OBJS := $(addprefix $(OBJ_DIR)/, $(GNL_SRCS:%.c=%.o))

################################################################################
########                         COMPILING                      ################
################################################################################

# CFLAGS := -Wall -Wextra -Werror -g -MMD -MP -I$(INC_DIRS)
CFLAGS := -Wall -Wextra -Werror -g -MMD -MP $(addprefix -I, $(INC_DIRS))
LDFLAGS :=
ARFLAGS := -rcs

all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS) $(GNL_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS) $(GNL_OBJS)

# $(OBJ_DIR)/%.o: %.c | $(OBJ_DIR) $(OBJ_DIR)/get_next_line
# 	$(CC) $(CFLAGS) -c $< -o $@
# Rule to compile .o files
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR) $(OBJ_DIR)/mini_garbage_collector $(OBJ_DIR)/get_next_line
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure the directories exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/mini_garbage_collector:
	mkdir -p $(OBJ_DIR)/mini_garbage_collector

$(OBJ_DIR)/get_next_line:
	mkdir -p $(OBJ_DIR)/get_next_line

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean submodule_update all

submodule_update:
	git submodule update --remote --merge

bonus: all

re_sub: submodule_rebuild

submodule_rebuild:
	git submodule deinit -f .
	git submodule update --init --recursive

-include $(OBJS:%.o=%.d)
-include $(BONUS_OBJS:%.o=%.d)
-include $(GNL_OBJS:%.o=%.d)

.PHONY: all clean fclean re bonus re_sub submodule_rebuild
