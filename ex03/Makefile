CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Bureaucrat

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all

leaks: all
	leaks --atExit --q -- ./$(NAME)

.PHONY: all clean fclean re leaks
