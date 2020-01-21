/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:00:35 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 16:24:08 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	private:

	public:
	PowerFist(std::string const & name = "Power Fist", int apcost = 8, int damage = 80);
	PowerFist(const PowerFist& old);
	PowerFist&	operator = (const PowerFist& copy);
	~PowerFist(void);
};

#endif
