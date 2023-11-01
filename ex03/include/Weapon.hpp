/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:23:34 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 15:46:20 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

#define RESET "\e[0m"
#define BLUE "\e[1;34m"

class Weapon {

public:
    Weapon(std::string type);

    std::string getType(void) const;
    void setType(std::string type);

    ~Weapon(void);

private:
    std::string _type;

};

#endif