/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:15:58 by strieste          #+#    #+#             */
/*   Updated: 2026/03/08 16:28:12 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->x.;
	this->y.setRawBits(0);
	return ;
}
Point::Point(int const x, int const y)
{
	this->x.setRawBits(x);
	this->y.setRawBits(y);
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
		this->x._fixedPointValue = copy.x.getRawBits();
		this->y.setRawBits(copy.y.getRawBits());
	}
	return (*this);
}

Point::~Point()
{}