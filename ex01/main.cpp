/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:08:38 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/27 23:33:37 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

class Person
{
	public:

	Person(std::string name): _name(name){}

	std::string get_name()
	{
		return _name;
	}

	static void print_name(Person & they)
	{
		std::cout << "My name is " << they.get_name() <<std::endl;
	}

	private:

	std::string _name;
};

template<typename T>
void display(T & elem)
{
	std::cout << elem << std::endl;
}

void triple(int & elem)
{
	elem *= 3;
}

void display_isdigit(int & elem)
{
	if (isdigit(elem))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}

int main (void)
{
	int test[] = {0, 1, 2, 3, 4, 5};

	iter(test, 6, display);
	iter(test, 6, triple);
	iter(test, 6, display);

	Person test2[] = {Person("Alice"),Person("Bob"),Person("Eva"),Person("Slim Shady")};

	iter(test2, 500, Person::print_name); //no segfault

	int test3[] = {'a', '1', '@', 'b'}; //as int for isdigit()

	iter(test3, 4, display_isdigit);	
}




/*

Write a function template iter that take 3 parameters and returns nothing.


The first parameter is the address of an array,
the second one is the length of the array and the
third one is a function called for each element of the array.


Wrap your work in an executable that proves that your function template iter works
with any type of array and/or with an instantiated function template as a third parameter.

*/