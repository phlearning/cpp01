/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:26:04 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 12:44:34 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name) {
    Zombie *zombieHorde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        zombieHorde[i].setName(name);
    }
    
    return zombieHorde;
}

// Zombie* zombieHorde(int N, std::string name) {
//     Zombie* zombieHorde = new Zombie[N];
//     std::string tmp;
//     for (int i = 0; i < N; i++) {
//         tmp = name;
//         tmp.append(std::to_string(i));
//         zombieHorde[i].setName(tmp);
//     }
    
//     return zombieHorde;
// }
