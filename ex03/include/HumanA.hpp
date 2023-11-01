/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:23:36 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 16:50:33 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

public:
    HumanA(std::string name, Weapon &weapon);

    void attack(void);

    ~HumanA(void);

private:
    Weapon &_Weapon;
    std::string _name;
};

#endif