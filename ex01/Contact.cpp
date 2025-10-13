/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:58:52 by jow               #+#    #+#             */
/*   Updated: 2025/10/13 21:57:46 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::print_details()
{
	std::cout << "\nFirst Name: " << get_firstName() << std::endl;
	std::cout << "Last Name: " << get_lastName() << std::endl;
	std::cout << "Nickname: " << get_nickname() << std::endl;
	std::cout << "Phone Number: " << get_phNum() << std::endl;
	std::cout << "Darkest Secret: " << get_darkSecret() << std::endl \
		<< std::endl;
}

std::string Contact::get_darkSecret()
{
	return (this->dark_secret);
}

std::string Contact::get_phNum()
{
	return (this->ph_num);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_lastName()
{
	return (this->last_name);
}

std::string Contact::get_firstName()
{
	return (this->first_name);
}

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->ph_num = "";
	this->dark_secret = "";
}

Contact::Contact(std::string first_name,
				 std::string last_name,
				 std::string nickname,
				 std::string ph_num,
				 std::string dark_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->ph_num = ph_num;
	this->dark_secret = dark_secret;
}