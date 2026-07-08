/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:04:38 by uvadakku          #+#    #+#             */
/*   Updated: 2026/07/08 12:11:49 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string &line, const std::string &s1, const std::string &s2)
{
	if (!s1.empty())
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
	}
}

bool openInputFile(std::ifstream &inputFile, const std::string &filename)
{
	inputFile.open(filename.c_str());
	if(!inputFile.is_open())
	{
		std::cerr << "Error could not open file!" << std::endl;
		return false;
	}
	return true;
}

bool openOutputFile(std::ofstream &outputFile, const std::string &filename)
{
	outputFile.open((filename + ".replace").c_str());
	if(!outputFile.is_open())
	{
		std::cerr << "Error could not open file!" << std::endl;
		return false;
	}
	return true;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: parameters required are <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream inputFile;
	if(!openInputFile(inputFile, filename))
		return (1);
	std::ofstream outputFile;
	if(!openOutputFile(outputFile, filename)) 
	{
		inputFile.close();
		return (1);
	}
	std::string line; //string variable to hold the content of each line
	while (std::getline(inputFile, line)) 
	{
		replaceString(line, s1, s2);
		outputFile << line << std::endl; 
	}
	inputFile.close();
	outputFile.close();
	return (0);
}

