/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomecker <tomecker@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:00:11 by tecker            #+#    #+#             */
/*   Updated: 2024/12/06 14:22:17 by tomecker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int size = 4;
	int arr_int[] = {1, 2, 3, 4};
	std::cout << "Printing integers:" << std::endl;
    iter(arr_int, size, print);

    std::string arr_str[] = {"this", "is", "a", "test"};
    std::cout << "\nPrinting strings:" << std::endl;
    iter(arr_str, size, print);
	return 0;
}