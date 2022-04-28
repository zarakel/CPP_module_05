#include "RobotomyRequestForm.hpp"

struct GradeTooHighException : std::exception
{
  const char* what() const throw() {return "Grade Too High Exception\n";}
};

struct GradeTooLowException : std::exception
{
  const char* what() const throw() {return "Grade Too Low Exception\n";}
};

struct notSigned : std::exception
{
  const char* what() const throw() {return "not signed\n";}
};
RobotomyRequestForm::RobotomyRequestForm( void ) : _Sign_Grade(72), _Exec_Grade(45)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : _target(target), _Sign_Grade(72), _Exec_Grade(45)
{
	std::cout << "Constructor called" << std::endl;
	return; 
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
    if (this->_Signed == true && executor.getGrade() <= this->_Exec_Grade && executor.getGrade() <= this->_Sign_Grade)
        this->task();
	else if (executor.getGrade() > this->_Exec_Grade && executor.getGrade() > this->_Sign_Grade)
		throw GradeTooLowException();
    else if (executor.getGrade() < 1)
		throw GradeTooHighException();
	else
		throw notSigned();
	}
	catch (std::exception & e)
    {
        std::cout << e.what();
    }
}

void RobotomyRequestForm::task( void ) const
{
	srand(time(0));
	if (rand() % 2)
		std::cout << "BRUIT DE PERCEUSE" << std::endl << _target << " a été robotomisé" << std::endl;
	else
		std::cout << "Opération échouée" << std::endl;
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
/*
bool RobotomyRequestForm::getSigned( void ) const
{
    return this->_Signed;
}

int RobotomyRequestForm::get_Sign_Grade ( void ) const
{
    return(this->_Sign_Grade);
}

int RobotomyRequestForm::get_Exec_Grade ( void ) const
{
    return(this->_Exec_Grade);
}

std::string RobotomyRequestForm::getName( void ) const
{
    return(this->_name);
}*/

void RobotomyRequestForm::beSigned( Bureaucrat const & A )
{
    this->_Signed = false;
    try
    {
        if ( A.getGrade() > this->_Sign_Grade )
            throw GradeTooLowException();
        else if ( A.getGrade() < 1 )
            throw GradeTooHighException();
        else
            this->_Signed = true;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
}
