/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:00:06 by tecker            #+#    #+#             */
/*   Updated: 2024/12/06 15:37:40 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T *arr;
		uint _size;
	public:
		Array()
			: _size(0)
		{
			arr = new T[_size]();
		}
		Array(uint n)
			: _size(n)
		{
			arr = new T[_size]();
		}
		Array(const Array &src)
			: _size(src._size)
		{
			arr = new T[_size]();
			for (uint i = 0; i < _size; i++)
				arr[i] = src.arr[i];
		}
		Array &operator=(const Array &src)
		{
			if (this != &src)
			{
				delete[] arr;
				_size = src._size;
				arr = new T[_size]();
				for (uint i = 0; i < _size; i++)
					arr[i] = src.arr[i];
			}
			return (*this);
		}
		T &operator[](uint index)
		{
			if (index < 0 || index > _size - 1)
				throw std::out_of_range("index is out of bounds!");
			return (arr[index]);
		}
		~Array()
		{
			delete[] arr;
		}
		uint size(void)
		{
			return (_size);
		}
};

#endif