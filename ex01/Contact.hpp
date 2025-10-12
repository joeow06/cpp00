/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:51:04 by jow               #+#    #+#             */
/*   Updated: 2025/10/12 23:10:16 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string ph_num;
	std::string dark_secret;

public:
	Contact();
	Contact(std::string first_name,
			std::string last_name,
			std::string nickname,
			std::string ph_num,
			std::string dark_secret);

	std::string	get_firstName();
	std::string	get_lastName();
	std::string	get_nickname();
	std::string	get_phNum();
	std::string	get_darkSecret();
	void		print_details();
};

#endif