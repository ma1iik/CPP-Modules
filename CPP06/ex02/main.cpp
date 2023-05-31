/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:14:45 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/21 09:31:53 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>

class	Base {
	public:
		virtual ~Base() {};
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base * generate(void) {
	//srand(time(0));
	int		i = rand() % 3 + 1;
	switch(i) {
		case 1:
			return new A;
		case 2:
			return new B;
		case 3:
			return new C;
		default:
			return NULL;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "The type is: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The type is: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The type is: C" << std::endl;
	else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p) {
	if (dynamic_cast<A*>(&p))
		std::cout << "The type is: A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "The type is: B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "The type is: C" << std::endl;
	else
        std::cout << "Unknown type" << std::endl;	
}

int	main() {
	std::srand(std::time(0)); // use current time as seed for random generator
    for (int i = 0; i < 10; ++i) {
        Base* basePtr = generate();
        identify(basePtr);
        identify(*basePtr);
        delete basePtr; // remember to delete dynamically allocated memory
    }

    return 0;
}