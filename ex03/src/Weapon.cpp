/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:24:28 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 14:37:03 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type(type) {}

std::string Weapon::getType(void) const {
    return (this->_type);
}

void Weapon::setType(std::string type) {
    this->_type = type;
}

Weapon::~Weapon(void) {};

