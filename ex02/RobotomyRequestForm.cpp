#include "ShrubberyCreationForm.hpp"

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
ShrubberyCreationForm::ShrubberyCreationForm( void ) : _Sign_Grade(145), _Exec_Grade(137)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : _target(target), _Sign_Grade(145), _Exec_Grade(137)
{
	return; 
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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

void ShrubberyCreationForm::task( void ) const
{
	std::string filename;
	filename += _target;
	filename += "_shrubbery";
	std::ofstream _target( filename );
	_target <<  "        tt                                                                                       tttt                                                                                     tttttt                                                                                      || " ; 
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
/*
bool ShrubberyCreationForm::getSigned( void ) const
{
    return this->_Signed;
}

int ShrubberyCreationForm::get_Sign_Grade ( void ) const
{
    return(this->_Sign_Grade);
}

int ShrubberyCreationForm::get_Exec_Grade ( void ) const
{
    return(this->_Exec_Grade);
}

std::string ShrubberyCreationForm::getName( void ) const
{
    return(this->_name);
}*/

void ShrubberyCreationForm::beSigned( Bureaucrat const & A )
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
