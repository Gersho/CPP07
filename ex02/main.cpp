/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:36:45 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/28 17:24:52 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

/*
Write a class template Array that contains elements of type T and that allows the
following behavior:

• Construction with no parameter: creates an empty array.

• Construction with an unsigned int n as a parameter: creates an array of n elements,
 initialized by default. (Tip: try to compile int * a = new int();, then
display *a.)

• Construction by copy and assignment operator. In both cases, modifying one of
the two arrays after copy/assignment won’t affect anything in the other array.

• You MUST use the operator new[] for your allocation. You must not do preventive
allocation. Your code must never access non allocated memory.

• Elements are accessible through the operator[].

• When accessing an element with the operator[], if this element is out of the limits,
a std::exception is thrown.

• A member function size that returns the number of elements in the array. This
member function takes no parameter and does not modify the current instance in
any way.

Wrap your work into an executable that proves that your class template works as
intended.

*/