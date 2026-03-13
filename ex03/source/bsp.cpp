/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 13:17:06 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 14:09:00 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Fixed.hpp"
#include "../header/Point.hpp"

static Fixed	findPoint(Point const a, Point const b, Point const point);

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	resOne(findPoint(a, b , point));
	Fixed	resTwo(findPoint(b, c, point));
	Fixed	resThree(findPoint(c, a, point));
	Fixed	check;

	if (resOne == check || resTwo == check || resThree == check)
		return (false);
	else if (resOne < check && resTwo < check && resThree < check)
		return (true);
	else if (resOne > check && resTwo > check && resThree > check)
		return (true);
	return (false);
}

static Fixed	findPoint(Point const a, Point const b, Point const point)
{
	return ((b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX()));
}