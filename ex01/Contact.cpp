/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:02:36 by muhakhan          #+#    #+#             */
/*   Updated: 2026/02/02 18:33:41 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
