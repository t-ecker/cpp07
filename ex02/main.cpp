/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:22:58 by tecker            #+#    #+#             */
/*   Updated: 2024/12/09 21:13:19 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5

int main(void)
{
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
            std::cerr << e.what() << std::endl;
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        for (uint i = 0; i < numbers.size(); i++)
        {
            try
            {
                    std::cout << "numbers [" << i << "]: " << numbers[i] << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }    
        }
    }
    {
        std::cout << "\nmore tests:" << std::endl;
        try
        {
            Array<int> numbers;
            numbers[0] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            Array<int> numbers(-1);
            numbers[0] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    
    return 0;
}