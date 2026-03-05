/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:50:23 by strieste          #+#    #+#             */
/*   Updated: 2026/03/05 15:31:44 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->i = 0;
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = copy;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	if (this != &copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->i = copy.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->i);
}

void	Fixed::setRawBits(int const raw)
{
	this->i = raw;
	return ;
}