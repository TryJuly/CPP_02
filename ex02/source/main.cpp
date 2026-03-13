/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 09:42:31 by strieste          #+#    #+#             */
/*   Updated: 2026/03/13 11:51:07 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "--- Initialisation ---" << std::endl;
    std::cout << "a is " << a << std::endl; // Doit afficher ~1234.43
    std::cout << "b is " << b << std::endl; // Doit afficher 10
    std::cout << "c is " << c << std::endl; // Doit afficher ~42.4219
    std::cout << "d is " << d << std::endl; // Doit afficher 10 (copie de b)

    std::cout << "\n--- Comparaisons ---" << std::endl;
    std::cout << "b < c  : " << (b < c) << std::endl;  // 1 (true)
    std::cout << "b > c  : " << (b > c) << std::endl;  // 0 (false)
    std::cout << "b == d : " << (b == d) << std::endl; // 1 (true)
    std::cout << "b != d : " << (b != d) << std::endl; // 0 (false)


    std::cout << "\n--- Arithmétique ---" << std::endl;
    std::cout << "b + 2  = " << (b + Fixed(2)) << std::endl;   // 12
    std::cout << "c - b  = " << (c - b) << std::endl;          // ~32.4219
    std::cout << "b * 2  = " << (b * Fixed(2)) << std::endl;   // 20
    std::cout << "b / 2  = " << (b / Fixed(2)) << std::endl;   // 5
    std::cout << "0.5 * 2 = " << (Fixed(0.5f) * Fixed(2)) << std::endl; // 1

    std::cout << "\n--- Incrémentations ---" << std::endl;
    Fixed e(0);
    std::cout << "e     : " << e << std::endl;   // 0
    std::cout << "++e   : " << ++e << std::endl; // 0.00390625 (1/256)
    std::cout << "e     : " << e << std::endl;   // 0.00390625
    std::cout << "e++   : " << e++ << std::endl; // 0.00390625 (renvoie l'ancienne valeur)
    std::cout << "e     : " << e << std::endl;   // 0.0078125 (2/256)

    std::cout << "\n--- Min / Max ---" << std::endl;
    std::cout << "max(a, b) : " << Fixed::max( a, b ) << std::endl; // a (1234...)
    std::cout << "min(a, b) : " << Fixed::min( a, b ) << std::endl; // b (10)

    Fixed f(5);
    Fixed g(10);
    Fixed::max(f, g) = Fixed(100); // On modifie le résultat de max
    std::cout << "g après max(f, g) = 100 : " << g << std::endl; // Doit être 100

    return 0;
}

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
	
// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	return 0;
// }
