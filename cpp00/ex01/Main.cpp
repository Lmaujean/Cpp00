/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:22:30 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/11 14:22:31 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string param;
    std::string str;
    PhoneBook   instance;

    while (1)
    {
        std::cout << "What do you want to do : ";
        getline(std::cin, param);
        if (param == "ADD")
            instance.ADD(str, 0);
        if (param == "SEARCH")
            instance.SEARCH();
        if (param == "EXIT")
        {
            std::cout << "Phonebook OFF" << std::endl;
            break;
        }
    }
}