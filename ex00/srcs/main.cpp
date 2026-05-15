/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 05:19:41 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/15 11:12:01 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("FOO");
	Zombie *heapbar = newZombie("Bar");
	heapbar->announce();
	delete heapbar;

	return (0);
}
