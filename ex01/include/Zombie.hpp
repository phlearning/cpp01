/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:22:12 by pvong             #+#    #+#             */
/*   Updated: 2023/10/30 15:39:32 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:
    Zombie(std::string name);

    void announce(void) const;

    ~Zombie(void);

private:
    std::string _name;

};

Zombie* zombieHorde(int N, std::string name);

#endif