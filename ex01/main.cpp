/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 22:39:34 by jow               #+#    #+#             */
/*   Updated: 2025/10/12 23:11:24 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void		searchContactList(PhoneBook &phoneBook);
std::string getUserInput(std::string msg);
void 		addNewContact(PhoneBook &phoneBook);
void 		searchContact(PhoneBook &phoneBook);

int main(void)
{
	PhoneBook phoneBook;
	std::string input;

	while (true)
	{
		std::cout << "---Enter a command---" << std::endl;
		std::cout << "> ADD" << std::endl;
		std::cout << "> SEARCH" << std::endl;
		std::cout << "> EXIT" << "\n"
				  << std::endl;

		while (true)
		{
			std::cin >> input;
			if (input == "ADD")
				addNewContact(phoneBook);
			else if (input == "SEARCH")
				searchContact(phoneBook);
			else if (input == "EXIT")
			{
				std::cout << "you entered EXIT" << std::endl;
				return (0);
			}
			else
				std::cout << "Invalid command" << std::endl;
			break;
		}
	}
}

void addNewContact(PhoneBook &phoneBook)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string ph_num;
	std::string dark_secret;

	first_name = getUserInput("Enter first name: ");
	last_name = getUserInput("Enter last name: ");
	nickname = getUserInput("Enter  nickname: ");
	ph_num = getUserInput("Enter phone number: ");
	dark_secret = getUserInput("Enter darkest secret: ");
	Contact newContact(first_name, last_name, nickname,
					   ph_num, dark_secret);
	phoneBook.add_to_phonebook(newContact);
}

void searchContact(PhoneBook &phoneBook)
{
	std::cout << "Enter which index u want" << std::endl;
	searchContactList(phoneBook);
}

std::string getUserInput(std::string msg)
{
	std::string input;

	std::cout << msg << std::endl;
	std::cin >> input;
	return (input);
}

void	searchContactList(PhoneBook &phoneBook)
{
	std::string input;
	int			num;
	
	std::cin >> input;
	num = atoi(input.c_str());
	phoneBook.get_contact(num - 1).print_details();
}