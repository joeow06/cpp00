/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:02:47 by jow               #+#    #+#             */
/*   Updated: 2025/10/13 20:51:30 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::getTotalContact()
{
	return (totalContact);
}

Contact PhoneBook::get_contact(int index)
{
	return (contact_list[index]);
}

PhoneBook::PhoneBook() : index(0), totalContact(0) {}

void PhoneBook::add_to_phonebook(Contact newContact)
{
	if (get_index() == maxContact)
		index = 0;
	contact_list[get_index()] = newContact;
	index++;
	if (totalContact < maxContact)
		totalContact++;
}

int PhoneBook::get_index()
{
	return (index);
}
