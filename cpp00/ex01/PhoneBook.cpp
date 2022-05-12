/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:35:11 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/11 12:35:12 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
    NumberContact = -1;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

int	_isundigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	_strisdigit(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!_isundigit(str[i]))
			return (0);
	}
	return (1);
}

void    PhoneBook::ADD(std::string str, int i)
{
    if (NumberContact < 7)
        ++NumberContact;
    if (i == 0)
    {
        std::cout << "Enter First Name : ";
        getline(std::cin, str);
        this->contact[NumberContact].SetFirstName(str);
        i = 1;
    }
    if (i == 1)
    {
        std::cout << "Enter Last Name : ";
        getline(std::cin, str);
        this->contact[NumberContact].SetLastName(str);
        i = 2;
    }
    if (i == 2)
    {
        std::cout << "Enter Nickname : ";
        getline(std::cin, str);
        this->contact[NumberContact].SetNickName(str);
        i = 3;
    }
    if (i == 3)
    {
        std::cout << "Enter Phone Number : ";
        getline(std::cin, str);
        this->contact[NumberContact].SetPhoneNumber(str);
        i = 4;
    }
    if (i == 4)
    {
        std::cout << "Enter Darkest Secret : ";
        getline(std::cin, str);
        this->contact[NumberContact].SetDarkestSecret(str);
    }
    i = 0;
}

void    PhoneBook::SEARCH(void)
{
    std::string str;
    int value;

    std::cout << "Enter The Name Of Contact Sought : ";
    getline(std::cin, str);
    if (_strisdigit(str))
    {
        value = atoi(str.c_str());
        int j = str.c_str()[0] - '0';
        if (value > 0 && value <= NumberContact)
        { 
            std::cout << std::setw(10) << j << "|";
            std::cout << std::setw(10) << this->contact[j].GetFirstName() << "|";    
            std::cout << std::setw(10) << this->contact[j].GetLastName() << "|";
            std::cout << std::setw(10) << this->contact[j].GetNickName() << "|" << std::endl;
        }
        else
            std::cout << "Give the good index of contact" << std::endl;
    }
    else
        std::cout << "Give an index please" << std::endl;
}