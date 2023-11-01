/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:23:35 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 16:53:03 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

public:
    HumanB(std::string name);

    void attack(void);
    void setWeapon(Weapon &weapon);
    
    ~HumanB(void);

private:
    Weapon *_Weapon;
    std::string _name;
};

#endif