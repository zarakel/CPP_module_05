#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : _Sign_Grade(72), _Exec_Grade(45)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm ( std::string target )  : _target(target), _Sign_Grade(72), _Exec_Grade(45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &)
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & )
{
	return *this;
}


RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}
