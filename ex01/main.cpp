/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 22:39:34 by jow               #+#    #+#             */
/*   Updated: 2025/10/13 22:00:37 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string truncateString(std::string string);
void displayContact(PhoneBook &phoneBook);
void searchContactList(PhoneBook &phoneBook);
std::string getUserInput(std::string msg);
void addNewContact(PhoneBook &phoneBook);
void searchContact(PhoneBook &phoneBook);

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
				std::cout << "Program exited successfully!" << std::endl;
				return (0);
			}
			else
				std::cout << "\n!!! Invalid command !!!\n" << std::endl;
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
	if (phoneBook.getTotalContact() == 0)
	{
		std::cout << "\n!!! PhoneBook is empty !!!\n" << std::endl;
		return ;
	}
	displayContact(phoneBook);
	searchContactList(phoneBook);
}

std::string getUserInput(std::string msg)
{
	std::string input;
	std::cout << msg;
	std::getline(std::cin >> std::ws, input);
	return input;
}

void searchContactList(PhoneBook &phoneBook)
{
	std::string input;
	int num;

	while (true)
	{
		std::cout << "Enter index of desired contact (or '0' to go back)" << std::endl;
		std::cin >> input;
		num = atoi(input.c_str());
		if (num == 0)
			return ;
		else if (num < 1 || num > phoneBook.getTotalContact())
			std::cout << "\n!!! Contact unavailable !!!\n" << std::endl;
		else
		{
			phoneBook.get_contact(num - 1).print_details();
			break;
		}
	}
}

void displayContact(PhoneBook &phoneBook)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < phoneBook.getTotalContact(); i++)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1;
		std::cout << "|" << std::setfill(' ') << std::setw(10) << truncateString(phoneBook.get_contact(i).get_firstName());
		std::cout << "|" << std::setfill(' ') << std::setw(10) << truncateString(phoneBook.get_contact(i).get_lastName());
		std::cout << "|" << std::setfill(' ') << std::setw(10) << truncateString(phoneBook.get_contact(i).get_nickname()) << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << std::endl;
}

std::string truncateString(std::string string)
{
	if (string.length() > 10)
	{
		string.resize(9);
		string.append(".");
	}
	return (string);
}