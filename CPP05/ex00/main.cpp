/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:04:42 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/01 17:43:11 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

void test1()
{
	try
	{
		Bureaucrat tami("Tamerlan", 1);
		tami.incrementGrade();
		std::cout << tami << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test2()
{
	try
	{
		Bureaucrat tami("Tamerlan", 3);
		tami.incrementGrade();
		std::cout << tami << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


void test3()
{
	try
	{
		Bureaucrat tami("Tamerlan", 150);
		tami.decrementGrade();
		std::cout << tami << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test4()
{
	try
	{
		Bureaucrat tami("Tamerlan", 100);
		tami.decrementGrade();
		std::cout << tami << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test5()
{
	try
	{
		Bureaucrat tami("Hosny", 0);
		tami.incrementGrade();
		std::cout << tami << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 1" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test1();
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 2" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test2();
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 3" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test3();
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 4" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test4();
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 5" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test5();
	
	return (0);
}