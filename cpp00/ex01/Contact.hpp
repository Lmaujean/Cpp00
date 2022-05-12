/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:20:59 by lmaujean          #+#    #+#             */
/*   Updated: 2022/05/11 13:21:00 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string phone_number;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;

    public:
        Contact(void);
        ~Contact(void);

       void SetFirstName(std::string str);
       void SetLastName(std::string str);
       void SetNickName(std::string str);
       void SetPhoneNumber(std::string str);
       void SetDarkestSecret(std::string str);

       std::string  GetFirstName(void);
       std::string  GetLastName(void);
       std::string  GetNickName(void);
       std::string  GetPhoneNumber(void);
       std::string  GetDarkestSecret(void);


};

#endif