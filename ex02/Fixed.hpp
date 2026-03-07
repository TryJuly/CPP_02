/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:42:50 by strieste          #+#    #+#             */
/*   Updated: 2026/03/07 17:53:36 by strieste         ###   ########.fr       */
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
		bool	operator>(Fixed const &rhs);
		bool	operator<(Fixed const &rhs);
		bool	operator>=(Fixed const &rhs);
		bool	operator<=(Fixed const &rhs);
		bool	operator==(Fixed const &rhs);
		bool	operator!=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		Fixed&	min(Fixed &rhs, Fixed &lhs);
		static const Fixed&	min(Fixed const &rhs, Fixed const &lhs);
		Fixed&	max(Fixed &rhs, Fixed &lhs);
		static const Fixed&	max(Fixed const &rhs, Fixed const &lhs);

	private:
		int		_fixedPointValue;
		static const int _bits = 8;
	
};

#endif