/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:56:32 by pvong             #+#    #+#             */
/*   Updated: 2023/11/03 15:49:53 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(void) {
    Zombie *zombie1 = newZombie("myNewZombie");

    zombie1->announce();
    randomChump("myRandomChump");
    delete zombie1;
    return (0);
}