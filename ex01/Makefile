NAME 		= phonebook
CXX 		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
OBJS 		= $(SRCS:.cpp=.o)
SRCS		= main.cpp \
				Contact.cpp \
				PhoneBook.cpp

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all re clean fclean