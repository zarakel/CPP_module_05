#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <fstream>
# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & );
		~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm const & cp );

		void	task( void ) const;
		void execute(Bureaucrat const & executor) const;
};	

#endif
