/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:57:26 by pvong             #+#    #+#             */
/*   Updated: 2023/10/30 14:52:02 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:
    Zombie(std::string name);
    void announce(void);
    ~Zombie(void);

private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif