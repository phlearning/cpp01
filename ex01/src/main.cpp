/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:21:58 by pvong             #+#    #+#             */
/*   Updated: 2023/11/03 13:42:34 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void) {
    int N = 0;
    
    std::cout << BLUE << "INFO: " << RESET << "Please input the number of zombies: ";
    std::cin >> N;
    if (!N || N < 0) {
        std::cout << RED << "Error: " << RESET << "Invalid input" << std::endl;
        return (0);
    }
    Zombie *zombieGroup = zombieHorde(N, "Mob");
    for (int i = 0; i < N; i++) {
        zombieGroup[i].announce();
    }
    delete[] zombieGroup;

    return (0);
}