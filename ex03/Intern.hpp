#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"
# include <algorithm>

class ShrubberyCreationForm;

class RobotomyRequestForm;

class PresidentialPardonForm;

class Form;

class Intern
{
	public :
	
		Intern( void );
		Intern( Intern const & );
		~Intern( void );

		Intern & operator=( Intern const & );

		Form * makeForm( std::string nameForm, std::string targetForm );

};

#endif
