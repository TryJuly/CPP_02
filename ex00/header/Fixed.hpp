/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:42:50 by strieste          #+#    #+#             */
/*   Updated: 2026/03/17 17:41:39 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed(Fixed const &copy);
		~Fixed();
		Fixed& operator=(Fixed const &copy);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);

	private:
		int		i;
		static const int j = 8;
	
};

#endif