/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:24:18 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 17:34:22 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character(std::string const & name)
{
	this->m_name = name;
	this->m_AP = 40;
	this->m_weapon = NULL;
}

Character(const Character& old)
{
	this->m_name = old.getName();
	this->m_AP = 40;
	this->m_weapon = NULL;
}

Character&	Character::operator = (const Character &copy)
{
	this->m_name = copy.getName();
	this->m_AP = 40;
	this->m_weapon = NULL;
	return (*this);
}

~Character(void)
{
}

void	Character::recoverAP(void)
{
	this->m_AP += (this->m_AP <= 30 ? 10 : 40 - this->m_AP);
}

void	Character::equip(AWeapon* weapon)
{
	this->m_weapon = weapon;
}

void	Character::attack(Enemy* enemy)
{
	if (this->m_weapon != NULL)
	{
		if (this->m_AP < this->m_weapon.getAPCost())
			std::cout << this->m_name << " can't attack" << std::endl;
		else
		{
			this->m_AP -= this->m_weapon.getAPCost();
			std::cout << this->m_name << " attaque " << enemy.getType() << " with a " << this->m_weapon.getName() << std::endl;
			this->m_weapon.attack();
			enemy.takeDamage(this->m_weapon.getDamage());
			if (enemy.getHP() <= 0)
				enemy::~Enemy();
		}
	}
}

void	Character::equip(AWeapon* weapon)
{
	this->m_weapon = weapon;
}

std::ostream&	operator << (std::ostream &o, Character const &rhs)
{
	o << rhs.getName() << " has " << rhs.getAP();
	if (rhs.getWeapon() != NULL)
		o << " and carries a " << rhs.getWeapon().getName();
	else
		o << " and is unarmed";
	o << std::endl;
	return (o);
}
