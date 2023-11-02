/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvong <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:38:20 by pvong             #+#    #+#             */
/*   Updated: 2023/11/02 16:46:37 by pvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <string>
#include <fstream>

// Reset the color
#define RESET "\e[0m"

// Regular color
#define RED "\e[0;31m"
#define GRN "\e[0;32m"

// Bold color
#define BBLK "\e[1;30m"
#define BWHT "\e[1;37m"

#define MSG_SEP "======================"
#define MSG_SEP2 "============================================"

class File {

public:
    File(std::string fileName, std::string _strToReplace, std::string _replaceBy);

    bool fileCanNotOpen(std::ifstream &file);
    void replaceByStr(std::string toReplace, std::string replaceBy);

    ~File(void);


private:
    std::string _fileName;
    std::string _strToReplace;
    std::string _replaceBy;
};

// void catFile(std::string fileName1, std::string fileName2);

#endif