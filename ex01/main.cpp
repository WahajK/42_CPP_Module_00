/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:28:05 by muhakhan          #+#    #+#             */
/*   Updated: 2026/02/03 17:22:07 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
	PhoneBook phoneBook;
	std::string command;

	std::cout << "Welcome to My PhoneBook!" << std::endl;

	while (true)
	{
		std::cout << "Available commands:\n1. ADD\n2. SEARCH\n3. EXIT" << std::endl;
		std::cout << "\nEnter command: ";
		if(!std::getline(std::cin, command))
		{
			std::cout << "\nEnd of input detected. Exiting program." << std::endl;
			break;
		}
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
		{
			std::cout << "Goodbye! All contacts will be lost." << std::endl;
			break;
		}
		else
			std::cout << "Invalid command. Please use ADD, SEARCH, or EXIT." << std::endl;
	}
	return 0;
}