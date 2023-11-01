/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:22:12 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 14:17:43 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

#define RESET "\e[0m"
#define BLUE "\e[1;34m"

class Zombie {

public:
    Zombie(void);

    void announce(void) const;
    void setName(std::string name);

    ~Zombie(void);

private:
    std::string _name;

};

Zombie *zombieHorde(int N, std::string name);

#endif