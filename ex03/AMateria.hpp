/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:38:50 by hexa              #+#    #+#             */
/*   Updated: 2020/04/27 20:53:11 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	public:
		AMateria(void);
		AMateria(const std::string&);
		AMateria(const AMateria&);
		virtual	~AMateria(void);

		AMateria &operator=	(const AMateria&);

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter&) = 0;

		unsigned int		getXP(void) const;
		const std::string&	getType(void) const;

	protected:
		unsigned int	m_xp;
		std::string		m_type;
};

#endif
