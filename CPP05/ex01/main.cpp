/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:04:42 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/10 09:20:27 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

void test1()
{
	try
	{
		Form	F1("morgage", 50, 20);
		Bureaucrat misr("Malik", 1);
		misr.signForm(F1);
		std::cout << misr << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test2()
{
	try
	{
		Form	F2("credit", 10, 20);
		Bureaucrat tidig("Tamer", 13);
		tidig.signForm(F2);
		std::cout << tidig << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test3()
{
	try
	{
		Form	F1("war decralaration", 1, 1);
		Bureaucrat hoo("Houssem", 150);
		hoo.signForm(F1);
		std::cout << hoo << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------

void test4()
{
	try
	{
		Form	F1("war decralaration", 30, 20);
		Bureaucrat hoo("Houssem", 25);
		Form	F2(F1);
		std::cout << F2.get_name() << " " << F2.get_signgrade() << " " << F2.get_execgrade() << std::endl;
		hoo.signForm(F2);
		std::cout << "if signed: " << F1.get_signed() << std::endl;
		std::cout << "if signed: " << F2.get_signed() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//------------------------------

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
	std::cout << "    TEST 4" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test4();
	return (0);
}