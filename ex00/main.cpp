/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:38:18 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/27 22:06:43 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void ) {

int a = 2;
int b = 3;

::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


std::string c = "chaine1";
std::string d = "chaine2";

::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


bool e = true;
bool f = false;

::swap(e, f);
std::cout << "e = " << e << ", f = " << f << std::endl;
std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;




return 0;

}

/*

Should output the following if you did well:
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2

Write the following function templates:

• swap: Swaps the values of two arguments. Does not return anything.

• min: Compares the two arguments and returns the smallest one.
If the two arguments are equal, then it returns the second one.

• max: Compares the two arguments and returns the biggest one. If the two arguments
are equal, then it returns the second one.

Templates must be defined in header files. You must turn in a main.cpp containing tests
for your program. This file can and will be changed during evaluation. These functions
can be called with any type of argument, with the condition that the two arguments have
the same type and supports all comparison operators. Provide enough code to compile
an executable that proves that everything works as intended.

*/