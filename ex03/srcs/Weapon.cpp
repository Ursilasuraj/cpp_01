/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 14:15:31 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/17 15:30:01 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string &newType) {
	type = newType;
}
