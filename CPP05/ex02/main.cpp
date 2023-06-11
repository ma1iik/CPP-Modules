/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:04:42 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/11 22:30:11 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat high("High", 1);
    Bureaucrat low("Low", 150);
    PresidentialPardonForm presForm("Target1");
    RobotomyRequestForm robotForm("Target2");
    ShrubberyCreationForm shrubForm("Target3");

    const std::string green = "\033[32m";
    const std::string reset = "\033[0m";

    // Test 1: Successful signing and execution
    try {
        std::cout << green << "Test 1: Successful signing and execution" << reset << std::endl;
        presForm.beSigned(high);
        presForm.execute(high);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test 2: Unsuccessful signing - grade too low
    try {
        std::cout << green << "Test 2: Unsuccessful signing - grade too low" << reset << std::endl;
        robotForm.beSigned(low);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test 3: Successful signing, unsuccessful execution - grade too low
    try {
        std::cout << green << "Test 3: Successful signing, unsuccessful execution - grade too low" << reset << std::endl;
        robotForm.beSigned(high);
        robotForm.execute(low);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test 4: Successful signing and execution
    try {
        std::cout << green << "Test 4: Successful signing and execution" << reset << std::endl;
        shrubForm.beSigned(high);
        shrubForm.execute(high);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test 5: Unsuccessful execution - not signed
    try {
        std::cout << green << "Test 5: Unsuccessful execution - not signed" << reset << std::endl;
        ShrubberyCreationForm unsignedShrub("UnsignedTarget");
        unsignedShrub.execute(high);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test 6: Invalid initial grade (too high)
    try {
        std::cout << green << "Test 6: Invalid initial grade (too high)" << reset << std::endl;
        Bureaucrat invalidHigh("InvalidHigh", 0);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

	// Test 7: Copy constructor for Bureaucrat
    try {
        std::cout << green << "Test 7: Copy constructor for Bureaucrat" << reset << std::endl;
        Bureaucrat copiedHigh(high);
        std::cout << "Original: " << high << std::endl;
        std::cout << "Copied: " << copiedHigh << std::endl;
    } catch (std::exception &e) {
        std::cout << "Test 7: " << e.what() << std::endl;
    }

    // Test 8: Assignment operator for Bureaucrat
    try {
        std::cout << green << "Test 8: Assignment operator for Bureaucrat" << reset << std::endl;
        Bureaucrat assignedHigh = low;
        std::cout << "Original: " << low << std::endl;
        std::cout << "Assigned: " << assignedHigh << std::endl;
    } catch (std::exception &e) {
        std::cout << "Test 8: " << e.what() << std::endl;
    }

    // Test 9: Copy constructor for Form (using ShrubberyCreationForm as an example)
    try {
        std::cout << green << "Test 9: Copy constructor for Form (using ShrubberyCreationForm as an example)" << reset << std::endl;
        shrubForm.beSigned(high);
        ShrubberyCreationForm copiedShrubForm(shrubForm);
        std::cout << "Original: " << shrubForm;
        std::cout << "Copied: " << copiedShrubForm;
    } catch (std::exception &e) {
        std::cout << "Test 9: " << e.what() << std::endl;
    }

    // Test 10: Assignment operator for Form (using ShrubberyCreationForm as an example)
    try {
        std::cout << green << "Test 10: Assignment operator for Form (using ShrubberyCreationForm as an example)" << reset << std::endl;
        ShrubberyCreationForm assignedShrubForm("AssignedTarget");
        assignedShrubForm = shrubForm;
        std::cout << "Original: " << shrubForm;
        std::cout << "Assigned: " << assignedShrubForm;
    } catch (std::exception &e) {
        std::cout << "Test 10: " << e.what() << std::endl;
    }

    // Test 11: Testing copy constructor

    try {
        std::cout << green << "Test 11: Testing copy constructor" << reset << std::endl;
        PresidentialPardonForm copiedPresidentalForm(presForm);
        std::cout << &presForm << std::endl;
        std::cout << &copiedPresidentalForm << std::endl;
    }  catch (std::exception &e) {
        std::cout << "Test 11: " << e.what() << std::endl;
    }

    return 0;
}
