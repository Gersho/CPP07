/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 22:10:43 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/27 23:34:18 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T * array, unsigned int size, void (*func)(T &))
{
	unsigned int i;

	i = 0;
	try 
	{
		if (!array)
			return ;
		while (i < size)
		{
			func(array[i]);
			i++;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << std::endl;
		std::cerr << "You did something stupid: " << e.what() << std::endl;
		return;
	}
}

#endif