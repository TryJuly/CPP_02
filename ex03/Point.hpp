/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:15:50 by strieste          #+#    #+#             */
/*   Updated: 2026/03/08 16:29:09 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(int const x, int const y);
		Point(Point& copy);
		Point&	operator=(Point const &copy);
		~Point();
		
	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif