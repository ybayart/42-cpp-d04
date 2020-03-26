/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:05:43 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/21 17:27:13 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class	Enemy
{
	protected:
	int				m_HP;
	std::string		m_type;
	std::string		m_born;
	std::string		m_die;

	public:
	Enemy(int hp = 0, std::string const & type = "");
	Enemy(const Enemy& old);
	Enemy&	operator = (const Enemy& copy);
	~Enemy(void);
	int				getHP(void) const;
	std::string		getType(void) const;
	virtual void	takeDamage(int damage);
};

#endif
