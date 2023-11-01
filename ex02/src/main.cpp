/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:21:58 by pvong             #+#    #+#             */
/*   Updated: 2023/11/01 12:42:59 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(void) {

    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of str: \t\t\t" << &str << std::endl;
    std::cout << "Memory address held by stringPTR: \t" << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: \t" << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of str: \t\t\t\t" << str << std::endl;
    std::cout << "Value pointed to by stringPTR: \t\t" << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: \t\t" << stringREF << std::endl;

    return (0);
}