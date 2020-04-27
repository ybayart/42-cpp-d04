/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 21:04:19 by hexa              #+#    #+#             */
/*   Updated: 2020/04/27 21:05:04 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {}

Cure::Cure(const std::string &type)
{
	this->m_xp = 0;
	this->m_type = type;
}

Cure::Cure(const Cure &src)
{
	*this = src;
}

Cure::~Cure(void) {}

Cure&
Cure::operator= (const Cure &rhs)
{
	if (this != &rhs)
	{
		this->m_xp = rhs.m_xp;
		this->m_type = rhs.m_type;
	}
	return (*this);
}

const std::string&
Cure::clone(void) const
{
	return (new Cure());
}

unsigned int
Cure::use(ICharacter& target) const
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
