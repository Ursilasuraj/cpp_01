/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:34:33 by uvadakku          #+#    #+#             */
/*   Updated: 2026/07/13 17:34:54 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie 
{
	private:
			std::string name;

	public:
				Zombie();
				Zombie(const std::string &zombieName); //default constructor is required for array allocation.
				~Zombie(); //destructor
				void announce(void);
				void setName(std::string newName); // give each zombie a name;
};


Zombie* zombieHorde( int N, std::string name );

#endif
