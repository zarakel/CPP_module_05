#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : _Sign_Grade(145), _Exec_Grade(137)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : _target(target), _Sign_Grade(145), _Exec_Grade(137)
{
	return; 
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &)
{
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & )
{
	return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}
