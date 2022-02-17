NAME = ex00

CXX = clang++

SRCS =	$(wildcard *.cpp)

INCLUDE = -I$(INCS_DIR)

FLAGS = -Wall -Wextra -Werror

OBJS 		= 	$(patsubst %.cpp, %.o, $(SRCS))

%.o :	%.cpp 
	@echo "Compiling: $<"
	@$(CXX) $(FLAGS) -c $< -o $@


$(NAME): $(OBJS)
	@$(CXX) -g -fsanitize=address $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME) $(OBJS)

re: fclean all


