/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:02:36 by muhakhan          #+#    #+#             */
/*   Updated: 2026/02/03 17:27:55 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(const Contact& other)
{
	*this = other;
}

Contact& Contact::operator=(const Contact& other)
{
	if (this != &other)
	{
		first_name = other.first_name;
		last_name = other.last_name;
		nickname = other.nickname;
		number = other.number;
		darkest_secret = other.darkest_secret;
	}
	return *this;
}

Contact::~Contact()
{
}

std::string Contact::getFirstName()
{
	return (first_name);
}

std::string Contact::getLastName()
{
	return (last_name);
}

std::string Contact::getNickname()
{
	return (nickname);
}

std::string Contact::getNumber()
{
	return (number);
}

std::string Contact::getDarkestSecret()
{
	return (darkest_secret);
}

void	Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::setNumber(std::string number)
{
	this->number = number;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}