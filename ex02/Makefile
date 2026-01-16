NAME = FragTrap

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS =  main.cpp ClapTrap.cpp FragTrap.cpp 
OBJS = $(SRCS:.cpp=.o)
HEADERS = ClapTrap.hpp FragTrap.hpp
all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all