#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm ( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & );
		~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm const & cp );
	private:
		std::string _target;
		int _Sign_Grade;
		int _Exec_Grade;
	
};	

#endif
