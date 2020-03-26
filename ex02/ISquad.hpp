/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:32:57 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/21 17:49:22 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

class	ISquad
{
	pubblic:

	virtual					~ISquad(void);
	virtual	int				getCount(void) const = 0;
	virtual ISpaceMarine*	getUnit(int) const = 0;
	virtual int				push(ISpaceMarine*) = 0;
};

#endif
