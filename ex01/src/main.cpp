/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:21:58 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 12:44:21 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    int N = 5;
    
    Zombie *zombieGroup = zombieHorde(N, "Mob");
    for (int i = 0; i < N; i++) {
        zombieGroup[i].announce();
    }
    delete[] zombieGroup;

    return (0);
}