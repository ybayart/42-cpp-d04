/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:20:29 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 16:47:58 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	Character
{
	private:
	std::string		m_name;
	int				m_AP;
	AWeapon			*m_weapon;

	public:
	Character(std::string const & name = "");
	Character(const Character& old);
	Character&	operator = (const Character& copy);
	~Character(void);

	void		recoverAP(void);
	void		equip(AWeapon*);
	void		attack(Enemy*);
	std::string	getName(void) const;
};

std::ostream &operator << (std::ostream &o, Character const &rhs);

#endif
