/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:15:58 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 13:58:33 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(float const x, float const y): _x(x), _y(y)
{}
Point::Point(Point const &copy): _x(copy._x), _y(copy._y) {}

Point&	Point::operator=(Point const &copy)
{
	(void)copy;
	return (*this);
}

Point::~Point() {}

Fixed const&	Point::getX() const { return (this->_x); }

Fixed const&	Point::getY() const { return (this->_y); }