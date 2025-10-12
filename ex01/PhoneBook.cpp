/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:02:47 by jow               #+#    #+#             */
/*   Updated: 2025/10/12 22:59:10 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact	PhoneBook::get_contact(int index)
{
	return (this->contact_list[index]);
}

PhoneBook::PhoneBook()
{
	index = 0;
}

void PhoneBook::add_to_phonebook(Contact newContact)
{
	if (get_index() == maxContact)
		this->index = 0;
	this->contact_list[get_index()] = newContact;
	index++;
}

int PhoneBook::get_index()	
{
	return (this->index);
}
