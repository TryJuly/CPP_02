/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:15:50 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 13:15:11 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &copy);
		Point&	operator=(Point const &copy);
		~Point();

		Fixed const&	getX() const;
		Fixed const&	getY() const;

	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif