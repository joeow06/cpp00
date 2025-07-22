#------------------------------------------------------------------------------#
#                                  GENERICS                                    #
#------------------------------------------------------------------------------#

.PHONY: all bonus clean fclean re
# .SILENT:

#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
INCLUDES	=	-I$(INC_DIR)
RM			=	rm -rf

# Output file name
NAME		=	megaphone

# Directories
INC_DIR		=	includes/
SRCS_DIR	=	srcs/
OBJS_DIR	=	bin/

# Source files
SRCS_FILES	=	megaphone.cpp

# Object files
OBJS_FILES	=	$(patsubst %.cpp, $(OBJS_DIR)%.o, $(SRCS_FILES))

#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(NAME)

bonus: all

# Generates output file
$(NAME): $(SRCS_FILES)
	$(CC) $(CFLAGS) $(SRCS_FILES) -o $(NAME)

# Removes objects
clean:
	@$(RM) $(OBJS_DIR)

# Removes objects and executables
fclean: clean
	$(RM) $(NAME)

# Removes objects and executables and remakes
re: fclean all
