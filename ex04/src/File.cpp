/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:38:27 by pvong             #+#    #+#             */
/*   Updated: 2023/11/02 16:46:26 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

File::File(std::string fileName, std::string toReplace, std::string replaceBy)
    : _fileName(fileName), _strToReplace(toReplace), _replaceBy(replaceBy) {}

bool File::fileCanNotOpen(std::ifstream &file) {

    if (!file.is_open()) {
        std::cout << BBLK << MSG_SEP2 << RESET << std::endl;
        std::cerr << BWHT << this->_fileName << RED << " cannot be opened" << RESET << std::endl;
        std::cout << BBLK << MSG_SEP2 << RESET << std::endl;
        return (true);
    }
    return (false);
}

// void catFile(std::string fileName1, std::string fileName2) {
//     std::ifstream file1(fileName1);
//     std::ifstream file2(fileName2);

//     int width = 22;
//     if (file1.is_open() && file2.is_open()) {
//         std::string line1, line2;
//         std::cout << BBLK << MSG_SEP2 << RESET << std::endl;
//         std::cout << std::setfill(' ') << std::setw((width + fileName1.length() + fileName2.length()) / 3) << fileName1 << " & " << fileName2 << std::endl;
//         std::cout << BBLK << MSG_SEP2 << RESET << std::endl;
//         while (std::getline(file1, line1) && std::getline(file2, line2)) {
//             std::cout << line1 << " | " << BWHT << line2 << RESET << std::endl;
//         }
//         std::cout << BBLK << MSG_SEP2 << RESET << std::endl;
//         file1.close();
//         file2.close();
//     } else {
//         std::cerr << RED << "Error: Unable to open one or both files." << std::endl;
//     }
// }

void File::replaceByStr(std::string toReplace, std::string replaceBy) {

    // My file
    std::ifstream inputFile(this->_fileName);
    if (fileCanNotOpen(inputFile))
        return;

    // My file.replace
    std::string outputFilename = this->_fileName + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile) {
        std::cerr << RED << "Error: Cannot create output file." << RESET << std::endl;
        return;
    }

    // Replace function
    std::string line;
    while (std::getline(inputFile, line)) {
        std::string modifiedLine;
        std::size_t pos = 0;
        while (pos < line.length()) {
            std::size_t found = line.find(toReplace, pos);
            if (found == std::string::npos) {
                modifiedLine += line.substr(pos);
                break;
            }
            modifiedLine += line.substr(pos, found - pos);
            modifiedLine += replaceBy;
            pos = found + toReplace.length();
        }
        outputFile << modifiedLine << std::endl;
    }

    // Closing the files
    inputFile.close();
    outputFile.close();

    std::cout << BBLK << MSG_SEP2 << RESET << std::endl;
    std::cout << "Successfully created " << GRN << outputFilename << RESET << std::endl;
    std::cout << BBLK << MSG_SEP2 << RESET << std::endl;
}

File::~File(void) {}