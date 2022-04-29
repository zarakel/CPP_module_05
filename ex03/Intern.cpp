#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Intern::Intern( Intern const & )
{
	return;
}

Intern & Intern::operator=( Intern const & )
{
	return *this;
}

Intern::~Intern( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Form * Intern::makeForm( std::string nameForm, std::string targetForm )
{
	int i;
	Form *ptr[3];
	std::string str[] = { "RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm" };
	Form *ptr_solo;

	Form * A = new RobotomyRequestForm (targetForm) ;
	Form * B = new ShrubberyCreationForm (targetForm);
	Form * C = new PresidentialPardonForm (targetForm);
	
	ptr[0] = A;
	ptr[1] = B;
	ptr[2] = C;

	i = 0;

	while ( i < 3 )
	{
		if ( nameForm == str[i] )
		{
			ptr_solo = ptr[i];
			for ( i = 0; i != 3; i++ )
				delete ptr[i];
			return ( ptr_solo );
		}
			
		i++;
	}
	std::cout << "No Form matched what were in parameters" << std::endl;

	return (0);
}
