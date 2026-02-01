#include "PhoneBook.hpp"

#ifndef Contact_HPP
# define Contact_HPP

class Contact
{
    private:
        std::string first_name;
    public:
        Contact();
        Contact(const Contact& other);
        Contact& operator=(const Contact& other);
        ~Contact();
};

#endif