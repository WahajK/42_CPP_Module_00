/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:28:02 by muhakhan          #+#    #+#             */
/*   Updated: 2026/02/03 16:48:52 by muhakhan         ###   ########.fr       */
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
		void	setFirstName(std::string first_name);
		void	setLastName(std::string last_name);
		void	setNickname(std::string nickname);
		void	setNumber(std::string number);
		void	setDarkestSecret(std::string darkest_secret);
};

#endif