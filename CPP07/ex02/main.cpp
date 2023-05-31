/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:27:14 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/28 14:49:04 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    // Test default constructor and size()
    Array<int> a;
    std::cout << "Size of default array: " << a.size() << std::endl;

    // Test parameterized constructor
    Array<int> b(10);
    std::cout << "Size of parameterized array: " << b.size() << std::endl;

    // Test operator[] and OutOfBounds exception
    try {
        int x = b[0]; // Should be fine
        //x = b[10]; // Should throw an exception
		(void)x;
    } catch (const Array<int>::OutOfBounds& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }

    // Test copy constructor
    Array<int> c(b);
    std::cout << "Size of copied array: " << c.size() << std::endl;

    // Test assignment operator
    Array<int> d;
    d = c;
    std::cout << "Size of assigned array: " << d.size() << std::endl;

    // Test modification of original and copy
    b[0] = 1;
    c[0] = 2;
    std::cout << "Element 0 of original array (b): " << b[0] << std::endl;
    std::cout << "Element 0 of copied array (c): " << c[0] << std::endl;

    return 0;
}
