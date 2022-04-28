#include "PresidentialPardonForm.hpp"

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
PresidentialPardonForm::PresidentialPardonForm( void ) : _Sign_Grade(25), _Exec_Grade(5)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : _target(target), _Sign_Grade(25), _Exec_Grade(5)
{
	std::cout << "Constructor called" << std::endl;
	return; 
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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

void PresidentialPardonForm::task( void ) const
{
	std::cout << _target << " a été pardonnée par Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &)
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
/*
bool PresidentialPardonForm::getSigned( void ) const
{
    return this->_Signed;
}

int PresidentialPardonForm::get_Sign_Grade ( void ) const
{
    return(this->_Sign_Grade);
}

int PresidentialPardonForm::get_Exec_Grade ( void ) const
{
    return(this->_Exec_Grade);
}

std::string PresidentialPardonForm::getName( void ) const
{
    return(this->_name);
}*/

void PresidentialPardonForm::beSigned( Bureaucrat const & A )
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
