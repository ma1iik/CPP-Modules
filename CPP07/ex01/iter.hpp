/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:52:14 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/27 13:59:50 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstddef>

template <typename T, typename Func>
void iter(T* array, size_t length, Func func) {
    for(size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}

template <typename T>
void printit(T element) {
    std::cout << element << std::endl;
}
