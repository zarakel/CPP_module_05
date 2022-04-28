#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : _Sign_Grade(25), _Exec_Grade(5) 
{
	std::cout << "Constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : _target(target), _Sign_Grade(25), _Exec_Grade(5) 
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & )
{
	return *this;
}


PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}
