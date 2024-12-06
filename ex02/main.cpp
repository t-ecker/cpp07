/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tecker <tecker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:22:58 by tecker            #+#    #+#             */
/*   Updated: 2024/12/06 17:22:59 by tecker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5

int main(void)
{
    Array<int> numbers(MAX_VAL);
    for (uint i = 0; i < numbers.size(); i++)
        numbers[i] = i + 1;
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
    for (uint i = 0; i < numbers.size(); i++)
        std::cout << "numbers [" << i << "]: " << numbers[i] << std::endl;
    return 0;
}