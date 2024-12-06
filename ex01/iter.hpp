/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:00:06 by tecker            #+#    #+#             */
/*   Updated: 2024/12/06 14:15:00 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void print(T a, int i)
{
	std::cout << "array pos: " << i << ", value: " << a << std::endl;
}

template <typename T>
void iter(T *arr, int size, void (*func)(T, int i))
{
	for (int i = 0; i < size; i++)
		func(arr[i], i);
}

#endif