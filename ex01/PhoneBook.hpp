#pragma once

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include <iostream>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact book[8];
        static int index;
    public:
        PhoneBook();
        PhoneBook(const PhoneBook& other);
        PhoneBook& operator=(const PhoneBook& other);
        ~PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif