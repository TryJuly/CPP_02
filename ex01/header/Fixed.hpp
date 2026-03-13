/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:42:50 by strieste          #+#    #+#             */
/*   Updated: 2026/03/06 07:43:07 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(Fixed const &copy);
		Fixed(float const floatingPoint);
		Fixed& operator=(Fixed const &copy);
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		friend std::ostream	&operator<<(std::ostream &out, Fixed const &c);
		
	private:
		int		_fixedPointValue;
		static const int _bits = 8;
	
};

#endif