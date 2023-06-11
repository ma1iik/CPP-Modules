/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:11:02 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/10 09:50:01 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)  : AForm("ShrubberyCreationForm", 145, 137){
	this->_target = "Undefined";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)  : AForm("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
	
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy)  : AForm("ShrubberyCreationForm", 145, 137) {
	*this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rfr) {
	if (this != &rfr)
	{
		AForm::operator=(rfr);
        this->_target = rfr._target;

	}
	return *this;
}
	
void ShrubberyCreationForm::perform_execute(Bureaucrat const & executor) const {
    const std::string file_name = executor.getName() + "_shrubbery";
    std::ofstream ofs(file_name.c_str());

    if (!ofs.is_open()) {
        std::cerr << "Failed to open file: " << file_name << std::endl;
        return;
    }

    ofs << "                                              .\n"
            "                                   .         ;\n"
            "      .              .              ;%     ;;\n"
            "        ,           ,                :;%  %;\n"
            "         :         ;                   :;%;'     .,\n"
            ",.        %;     %;            ;        %;'    ,;\n"
            "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
            "   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
            "    ;%;      %;        ;%;        % ;%;  ,%;'\n"
            "     `%;.     ;%;     %;'         `;%%;.%;'\n"
            "      `:;%.    ;%%. %@;        %; ;@%;%'\n"
            "         `:%;.  :;bd%;          %;@%;'\n"
            "           `@%:.  :;%.         ;@@%;'\n"
            "             `@%.  `;@%.      ;@@%;\n"
            "               `@%%. `@%%    ;@@%;\n"
            "                 ;@%. :@%%  %@@%;\n"
            "                   %@bd%%%bd%%:;\n"
            "                     #@%%%%%:;;\n"
            "                     %@@%%%::;\n"
            "                     %@@@%(o);  . '\n"
            "                     %@@@o%;:(.,'\n"
            "                 `.. %@@@o%::;\n"
            "                    `)@@@o%::;\n"
            "                     %@@(o)::;\n"
            "                    .%@@@@%::;\n"
            "                    ;%@@@@%::;.\n"
            "                   ;%@@@@%%:;;;.\n"
            "               ...;%@@@@@%%:;;;;,..\n";

    ofs.close();

    std::cout << executor.getName() << " executed " << this->_target << "!" << std::endl;
}
