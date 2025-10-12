/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:48:39 by jow               #+#    #+#             */
/*   Updated: 2025/10/12 22:58:13 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	int		get_index();
	void	add_to_phonebook(Contact newContact);
	Contact	get_contact(int index);

private:
	static const int maxContact = 8;
	int			index;
	Contact		contact_list[maxContact];
};

#endif