/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:25:56 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 14:12:38 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void) {}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::announce(void) const {
    std::cout << "Zombie " << BLUE << this->_name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie " << BLUE << this->_name << RESET << " has been destroyed" << std::endl;
}
