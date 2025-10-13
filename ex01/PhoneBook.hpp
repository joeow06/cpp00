/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:48:39 by jow               #+#    #+#             */
/*   Updated: 2025/10/13 20:48:35 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	int		get_index();
	int		getTotalContact();
	void	add_to_phonebook(Contact newContact);
	Contact	get_contact(int index);

private:
	static const int maxContact = 8;
	int			index;
	int			totalContact;
	Contact		contact_list[maxContact];
};

#endif