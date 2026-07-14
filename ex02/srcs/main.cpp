/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 08:21:17 by uvadakku          #+#    #+#             */
/*   Updated: 2026/07/14 15:26:14 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string mystring = "HI THIS IS BRAIN";
	std::string *stringPTR = &mystring;
	std::string &stringREF = mystring;
	
	std::cout << " MEMORY ADDRESS " << "\n";
	std::cout << &mystring << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << "VALUES" << "\n";
	std::cout << mystring << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";

	return 0;
}
