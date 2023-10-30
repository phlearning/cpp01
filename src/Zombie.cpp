/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:00:52 by pvong             #+#    #+#             */
/*   Updated: 2023/10/30 15:07:47 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : _name(name) {}

void    Zombie::announce(void) {
    std::cout << "Zombie " << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}