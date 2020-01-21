/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 23:46:09 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/16 00:47:48 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	private:

	std::string		m_name;
	std::string		m_title;

	public:
	
	Sorcerer(std::string name, std::string title);
	~Sorcerer(void);

	std::string		getName(void) const;
	std::string		getTitle(void) const;
	void			polymorph(Victim const& elem);
};

std::ostream &operator << (std::ostream &o, Sorcerer const& elem);

#endif
