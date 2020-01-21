/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 23:50:02 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/16 00:45:16 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	m_name = name;
	m_title = title;
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string		Sorcerer::getName(void) const
{
	return (this->m_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->m_title);
}

void			Sorcerer::polymorph(Victim const& elem)
{
	elem.getPolymorphed();
}

std::ostream &operator << (std::ostream &o, Sorcerer const& elem)
{
	o << "I am " << elem.getName() << ", " << elem.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}
