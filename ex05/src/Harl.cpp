/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:58:32 by pvong             #+#    #+#             */
/*   Updated: 2023/11/03 13:33:57 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void) {}

void Harl::complain(std::string level) {
    if (level.empty()) {
        std::cout << BLK << "Harl: " << RESET << "Please input something in the level" << std::endl;
        return ;
    }

    int nbLevels = 4;
    std::string myLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*methods[])(void) = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error};

    for (int i = 0; i < nbLevels; i++) {
        if (myLevels[i] == level) {
            (this->*methods[i])();
            return ;
        }
    }
    std::cout << CYA << level << ": " << RESET << "There is a lot to complain but not this level" << std::endl;
}

void Harl::_debug(void) {
    std::cout << BLU << "DEBUG: " << RESET << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void) {
    std::cout << YLW << "INFO: " << RESET << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning(void) {
    std::cout << RED << "WARNING: " << RESET << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::_error(void) {
    std::cout << RED << "ERROR: " << RESET << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl(void) {}