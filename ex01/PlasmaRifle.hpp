/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:48:42 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/20 15:00:01 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	private:

	public:
	PlasmaRifle(std::string const & name = "Plasma Rifle", int apcost = 5, int damage = 21);
	PlasmaRifle(const PlasmaRifle& old);
	PlasmaRifle&	operator = (const PlasmaRifle& copy);
	~PlasmaRifle(void);
};

#endif
