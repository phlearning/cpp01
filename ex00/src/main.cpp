/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:56:32 by pvong             #+#    #+#             */
/*   Updated: 2023/10/30 15:18:10 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

// * : Use a pointer if needed to be changed or to be managed dynamically, or if it can be pointed to null;
// & : Use a reference if it is always a non-null object to avoid passing null values, and easier syntax (using '.');

int main(void) {
    Zombie* zombie1 = newZombie("myNewZombie");

    zombie1->announce();
    randomChump("myRandomChump");
    delete zombie1;
    return (0);
}