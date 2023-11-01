/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:23:32 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 16:51:17 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _Weapon(weapon), _name(name) {}

void HumanA::attack(void) {
    std::cout << this->_name << " attacks with their " << BLUE << this->_Weapon.getType() << RESET << std::endl;
}

HumanA::~HumanA(void) {}
