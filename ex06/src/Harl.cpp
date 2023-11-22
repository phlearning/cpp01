/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:47:46 by pvong             #+#    #+#             */
/*   Updated: 2023/11/03 15:31:53 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void) {}

void Harl::complain(std::string level) {
    if (level.empty()) {
        std::cout << BLK << "Harl: " << RESET << "Please input something in the level" << std::endl;
        return;
    }

    std::string myLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*methods[])(void) = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error};

    int i = 0;
    while (i < 4) {
        if (level == myLevels[i]) {
            break;
        }
        i++;
    }

    switch (i) {

    case 0:
        (this->*methods[i++])();

    case 1:
        (this->*methods[i++])();

    case 2:
        (this->*methods[i++])();

    case 3:
        (this->*methods[i])();
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        std::cout << std::endl;
        break;
    }
}

void Harl::_debug(void) {
    std::cout << BLU << "[DEBUG]" << RESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::_info(void) {
    std::cout << YLW << "[INFO]" << RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::_warning(void) {
    std::cout << RED << "[WARNING]" << RESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month" << std::endl;
    std::cout << std::endl;
}

void Harl::_error(void) {
    std::cout << RED << "[ERROR]" << RESET << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

Harl::~Harl(void) {}