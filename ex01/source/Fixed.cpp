/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:50:23 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 11:49:53 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nb << this->_bits);
	return ;
}

Fixed::Fixed(float const floatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(floatingPoint * (1 << _bits))); // roundf(floatingPoint * (1 << _bits)) == * 256 (_bits == 8)
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
		this->setRawBits(copy.getRawBits());
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &c)
{
	out << c.toFloat();
	return (out);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->getRawBits() / (1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> _bits);
}