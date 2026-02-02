/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:28:02 by muhakhan          #+#    #+#             */
/*   Updated: 2026/02/02 18:33:18 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#ifndef Contact_HPP
# define Contact_HPP

class Contact
{
    private:
        std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string number;
		std::string darkest_secret;
    public:
        Contact();
        Contact(const Contact& other);
        Contact& operator=(const Contact& other);
        ~Contact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getDarkestSecret();
};

#endif