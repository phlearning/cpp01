/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:56:56 by pvong             #+#    #+#             */
/*   Updated: 2023/11/02 16:46:19 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "File.hpp"

int main(int ac, char **av) {

    if (ac != 4) {
        std::cout << "Error: Input: " << av[0] << " <file> <str_to_replace> <replace_by_str>" << std::endl;
        return (0);
    }
    File myFile(av[1], av[2], av[3]);
    myFile.replaceByStr(av[2], av[3]);

    // std::string replaceFile;
    // replaceFile.assign(av[1]);
    // replaceFile += ".replace";
    // catFile(av[1], replaceFile);
    
    return (0);
}