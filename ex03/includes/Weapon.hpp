/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 13:56:07 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/18 06:48:48 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private: 
		std::string type;
	
	public:
		Weapon(const std::string& type);
		~Weapon();
		const std::string& getType() const;
		void setType(const std::string &newType);
};
#endif
