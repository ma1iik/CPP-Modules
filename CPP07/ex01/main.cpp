/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 02:13:13 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/27 13:48:08 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, sizeof(intArray) / sizeof(int), printit<int>);

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(doubleArray, sizeof(doubleArray) / sizeof(double), printit<double>);

    std::string stringArray[] = {"Hello", "World", "!"};
    iter(stringArray, sizeof(stringArray) / sizeof(std::string), printit<std::string>);

    return 0;
}