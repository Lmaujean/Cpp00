/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:51:27 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/11 12:51:28 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
            Contact contact[8];
            int     NumberContact;
    public:
            PhoneBook(void);
            ~PhoneBook(void);

            void    ADD(std::string str, int i);
            void    SEARCH(void);
};

#endif
