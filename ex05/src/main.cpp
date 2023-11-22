/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:58:37 by pvong             #+#    #+#             */
/*   Updated: 2023/11/03 13:35:17 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av) {
    Harl harl;

    if (ac != 2) {
        std::cout << RED << "Error: Input: " << RESET << av[0] << " <complain_level>" << std::endl;
        std::cout << "Available levels: DEBUG, INFO, WARNING, ERROR";
        return (0);
    }
    harl.complain(av[1]);
    return (0);
}