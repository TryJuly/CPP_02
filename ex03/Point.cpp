/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:15:58 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 11:56:20 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->_x.setRawBits(0);
	this->_y.setRawBits(0);
	return ;
}
Point::Point(int const x, int const y)
{
	this->_x.setRawBits(x);
	this->_y.setRawBits(y);
	return ;
}
Point::Point(Point& copy)
{
	(*this) = copy;
	return ;
}

Point&	Point::operator=(Point const &copy)
{
	if (this != &copy)
	{
		this->_x.setRawBits(copy._x.getRawBits());
		this->_y.setRawBits(copy._y.getRawBits());
	}
	return (*this);
}

Point::~Point()
{}