/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:04:54 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 16:03:57 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	this->m_HP = hp;
	this->m_type = type;
	this->m_born = "";
	this->m_die = "";
}

Enemy::Enemy(const Enemy& old)
{
	this->m_HP = old.getHP();
	this->m_type = old.getType();
	this->m_born = "";
	this->m_die = "";
}

Enemy&	Enemy::operator = (const Enemy& copy)
{
	this->m_type = copy.getType();
	this->m_HP = copy.getHP();
	this->m_born = "";
	this->m_die = "";
	return (*this);
}

Enemy::~Enemy(void)
{
}

int			Enemy::getHP(void) const
{
	return (this->m_HP);
}

std::string	Enemy::getType(void) const
{
	return (this->m_type);
}

void		Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		damage = (this->m_HP - damage < 0 ? this->m_HP : damage);
		this->m_HP -= damage;
	}
}
