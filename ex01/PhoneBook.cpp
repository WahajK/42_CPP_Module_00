/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:12:14 by muhakhan          #+#    #+#             */
/*   Updated: 2026/02/03 17:28:02 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = 0;

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::PhoneBook(const PhoneBook& other)
{
	*this = other;
}

PhoneBook& PhoneBook::operator=(const PhoneBook& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 8; i++)
			book[i] = other.book[i];
	}
	return *this;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	Contact	contact;

	std::string input;
	std::cout << "Enter First Name: ";
	std::getline(std::cin, input);
	contact.setFirstName(input);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	contact.setLastName(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	contact.setNickname(input);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	contact.setNumber(input);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, input);
	contact.setDarkestSecret(input);
	
	book[index % 8] = contact;
	index++;
}

void	PhoneBook::searchContact()
{
}