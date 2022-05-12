/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:35:11 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/11 13:35:14 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::GetFirstName(void)
{
    return (this->first_name);
}

std::string Contact::GetLastName(void)
{
    return (this->last_name);
}

std::string Contact::GetNickName(void)
{
    return (this->nickname);
}

std::string Contact::GetPhoneNumber(void)
{
    return (this->phone_number);
}

std::string Contact::GetDarkestSecret(void)
{
    return (this->darkest_secret);
}

void    Contact::SetFirstName(std::string str)
{
    this->first_name.assign(str);
}

void    Contact::SetLastName(std::string str)
{
    this->last_name.assign(str);
}

void    Contact::SetNickName(std::string str)
{
    this->nickname.assign(str);
}

void    Contact::SetPhoneNumber(std::string str)
{
    this->phone_number.assign(str);
}

void    Contact::SetDarkestSecret(std::string str)
{
    this->darkest_secret.assign(str);
}