/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:56:04 by hexa              #+#    #+#             */
/*   Updated: 2020/04/27 20:59:29 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {}

Ice::Ice(const std::string &type)
{
	this->m_xp = 0;
	this->m_type = type;
}

Ice::Ice(const Ice &src)
{
	*this = src;
}

Ice::~Ice(void) {}

Ice&
Ice::operator= (const Ice &rhs)
{
	if (this != &rhs)
	{
		this->m_xp = rhs.m_xp;
		this->m_type = rhs.m_type;
	}
	return (*this);
}

const std::string&
Ice::clone(void) const
{
	return (new Ice());
}

unsigned int
Ice::use(ICharacter& target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
