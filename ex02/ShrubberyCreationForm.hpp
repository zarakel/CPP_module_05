#ifndef SHEUBBERYCREATIONFORM_HPP
# define SHEUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & cp );
	private:
        std::string _target;
        int _Sign_Grade;
        int _Exec_Grade;
	
};	

#endif
