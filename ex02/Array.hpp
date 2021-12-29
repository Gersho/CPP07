/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:36:43 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/29 19:22:00 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{

	public:

	Array(): _size(0)
	{
		_array = NULL;
	}

	Array(unsigned int n): _size(n)
	{
		if (n)
			_array = new T[n]();
		else
			_array = NULL;
	}

	Array(const Array & src)
	{
		_array = NULL;
		*this = src;
	}


	~Array()
	{
		if (_array)
			delete[] _array;
	}

	Array & operator=(Array const & rhs)
	{
		unsigned int i;

		if ( this != &rhs )
		{
			i = 0;
			if (_array)
				delete[] _array;
			_size = rhs._size;
			_array = new T[rhs._size]();
			while (i < rhs._size)
			{
				_array[i] = rhs._array[i];
				i++;
			}
		}
		return *this;
	}

	unsigned int size() const
	{
		return (_size);
	}

	T & operator[](const unsigned int & index)
	{
		if (index >= _size)
			throw OutOfLimitsException();
		return (_array[index]);
	}

	private:
	
	unsigned int _size;
	T * _array;

	class OutOfLimitsException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Trying to access outside of the Array.");
		}
	};

};


#endif