/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 02:00:12 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/30 18:13:09 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
    Animal* animals[10];
    for (int i = 0; i < 5; i++) {
        animals[i] = new Dog();
        animals[i+5] = new Cat();
    }

    for (int i = 0; i < 10; i++) {
        animals[i]->makeSound();
        delete animals[i];
    }
    return 0;
}