/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:48:33 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/27 22:07:25 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T & a, T & b)
{
	T  swap;

	swap = a;
	a = b;
	b = swap;
}

template <typename T>
T const & min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template <typename T>
T const & max(T const & a, T const & b)
{
	return (a > b ? a : b);
}


#endif