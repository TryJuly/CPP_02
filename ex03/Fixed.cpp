/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:50:23 by strieste          #+#    #+#             */
/*   Updated: 2026/03/07 19:26:41 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed(int const nb)
{
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nb << this->_bits);
	return ;
}

Fixed::Fixed(float const floatingPoint)
{
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(floatingPoint * (1 << _bits))); // roundf(floatingPoint * (1 << _bits)) == * 256 (_bits == 8)
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	(*this) = copy;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	if (this != &copy)
	{
		// std::cout << "Copy assignment operator called" << std::endl;
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
	// std::cout << "Destructor called" << std::endl;
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

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	result;
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	result;
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	Fixed	result;
	long	temp;
	temp = (this->getRawBits() * rhs.getRawBits()) >> this->_bits;
	result.setRawBits(temp);
	return (result);
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	Fixed	result;
	if (rhs.getRawBits() != 0)
	{
		long long	temp =static_cast<long long>(this->getRawBits() << this->_bits);
		result.setRawBits(static_cast<int>(temp / rhs.getRawBits()));
	}
	else
		result.setRawBits(0);
	return (result);
}

Fixed&	Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	result = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (result);
}

Fixed&	Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (result);
}

Fixed&	Fixed::min(Fixed &rhs, Fixed &lhs)
{
	if (rhs.getRawBits() < lhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

const Fixed&	Fixed::min(Fixed const &rhs, Fixed const &lhs)
{
	if (rhs.getRawBits() < lhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}
Fixed&	Fixed::max(Fixed &rhs, Fixed &lhs)
{
	if (rhs.getRawBits() > lhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

const Fixed&	Fixed::max(Fixed const &rhs, Fixed const &lhs)
{
	if (rhs.getRawBits() > lhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}
