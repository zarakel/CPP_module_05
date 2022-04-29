#ifndef SHEUBBERYCREATIONFORM_HPP
# define SHEUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & cp );

		void	task( void ) const;
		void execute(Bureaucrat const & executor) const;
};	

#endif
