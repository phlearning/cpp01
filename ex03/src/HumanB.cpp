/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:23:29 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 16:54:47 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _Weapon(NULL), _name(name) {}

void HumanB::attack(void) {
    if (this->_Weapon != NULL) {
        std::cout << this->_name << " attacks with their " << BLUE << this->_Weapon->getType() << RESET << std::endl;
    } else {
        std::cout << this->_name << BLUE << " is urnamed. " << RESET << this->_name << " attacks with their frail little arms" << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_Weapon = &weapon;
}

HumanB::~HumanB(void) {};
