/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:42:31 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 14:27:36 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Fixed.hpp"

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point d(0, 0);
	Point e(6, 0);
	Point f(3, 6);

	Point p1(3, 2);  // inside
	Point p2(0, 6);  // outside
	Point p3(3, 0);  // on the line

	std::cout << "P(3,2) inside  : " << bsp(d, e, f, p1) << " (Expected: 1)" << std::endl;
	std::cout << "P(0,6) outside : " << bsp(d, e, f, p2) << " (Expected: 0)" << std::endl;
	std::cout << "P(3,0) on the line: " << bsp(d, e, f, p3) << " (Expected: 0)" << std::endl;

	return 0;
}

