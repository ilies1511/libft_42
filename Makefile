###MAKEFILE###

NAME = libft.a

HEADER = libft.h

CFLAGS = cc -Wall -Wextra -Werror

.DEFAULT_GOAL := all # default rule to be executed

SRCS += ft_bzero.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_memcpy.c
SRCS += ft_memset.c
SRCS += ft_strchr.c
SRCS += ft_strlcat.c
SRCS += ft_strlcpy.c
SRCS += ft_strlen.c
SRCS += ft_strncmp.c
SRCS += ft_strrchr.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c
SRCS += ft_memmove.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_strnstr.c
SRCS += ft_atoi.c
SRCS += ft_calloc.c
SRCS += ft_strdup.c
SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_split.c
SRCS += ft_putchar_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_strmapi.c
SRCS += ft_striteri.c
SRCS += ft_itoa.c

BONUS_SRCS += ft_lstnew_bonus.c
BONUS_SRCS += ft_lstadd_front_bonus.c
BONUS_SRCS += ft_lstsize_bonus.c
BONUS_SRCS += ft_lstlast_bonus.c
BONUS_SRCS += ft_lstadd_back_bonus.c
BONUS_SRCS += ft_lstdelone_bonus.c
BONUS_SRCS += ft_lstclear_bonus.c
BONUS_SRCS += ft_lstiter_bonus.c
BONUS_SRCS += ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS) $(BONUS_OBJS)
	ar rcs $@ $(OBJS) $(BONUS_OBJS)

$(OBJS): %.o: %.c $(HEADER)
	$(CFLAGS) -I $(HEADER) -c $< -o $@

$(BONUS_OBJS): %.o: %.c $(HEADER)
	$(CFLAGS) -I $(HEADER) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus

# CC: Compiler command (set to cc).
# CFLAGS: Compilation flags.
# SRCDIR: Source directory.
# INCDIR: Header directory.
# SRCS: List of source files.
# OBJS: List of object files.
# LIBNAME: Name of the library.
# all: Default target (equivalent to make libft.a).
# $(LIBNAME): Rule to create the library.
# %.o: %.c: Rule for compiling individual source files.
# clean: Rule to remove object files.
# fclean: Rule to remove library and object files.
# re: Rule to rebuild everything.
# .PHONY: Marks targets as not representing files. So if you have a file name called "clean" or "all" doesn't get confusing
# Variables defined with := in GNU make are expanded when they are defined rather than when they are used.
# $< points to the first prerequisite.
# $@ points to the target
# $^ : all the prerequipments-dependencies
# ar -rcs: ar creates-modifies a group of files combined into an archive,s is like ranlib(), -c means be silent not print info, -r gives the archive file position
# % is pattern matching character ex. %.c %.o means if I have file1.c I should have same name file1.o
# ranlib command converts each Archive library to a random library. A random library is an archive library that contains a symbol table.
# to run makefile use "make -f name_of_file" or just make if name is the default Makefile or makefile
# := instead of = to avoid infinite recursion if ex. You type CC = $(CC)
#SRCS := $(wildcard *.c): $(wildcard pattern) is one of the functions for filenames. In this case, all files with the .c extension will be stored in a variable SRCS.
#BINS := $(SRCS:%.c=%): This is called as substitution reference. In this case, if SRCS has values 'foo.c bar.c', BINS will have 'foo bar'.
