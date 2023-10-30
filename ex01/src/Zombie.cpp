/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:25:56 by pvong             #+#    #+#             */
/*   Updated: 2023/10/30 15:37:56 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : _name(name) {}

void Zombie::announce(void) const {
    std::cout << "Zombie " << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde(int N, std::string name) {
    Zombie* zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombieHorde[i] = Zombie(name);
    }
    
    return zombieHorde;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

int main(void) {
    int n = 5;
    
    Zombie* zombieGroup = zombieHorde(n, "UglyZombie");
    for (int i = 0; i < n; i++) {
        zombieGroup[i].announce();
    }
    delete[] zombieGroup;

    return (0);
}