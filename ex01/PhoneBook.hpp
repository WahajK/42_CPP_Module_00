#pragma once

#include "Contact.hpp"

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#pragma once

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>

class PhoneBook
{
    private:
        Contact book[8];
        static int quantity;
    public:
        PhoneBook();
        PhoneBook(const PhoneBook& other);
        PhoneBook& operator=(const PhoneBook& other);
        ~PhoneBook();
};

#endif