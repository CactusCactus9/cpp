NAME	= Mutated

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

CXX	 = c++

CXXFLAGS = -Wall -Werror -Wextra  -std=c++98

%.o: %.cpp MutantStack.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@


clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re