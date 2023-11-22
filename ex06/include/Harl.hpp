/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:47:31 by pvong             #+#    #+#             */
/*   Updated: 2023/11/03 13:53:29 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

// Text color codes
#define RESET "\e[0m"
#define BLK "\e[30m"
#define RED "\e[31m"
#define GRN "\e[32m"
#define YLW "\e[33m"
#define BLU "\e[34m"
#define MAG "\e[35m"
#define CYA "\e[36m"
#define WHT "\e[37m"

class Harl {
    
public:
    Harl(void);

    void complain(std::string level);

    ~Harl(void);

private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
};

#endif