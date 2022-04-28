#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & );
		~PresidentialPardonForm( void );

		PresidentialPardonForm & operator=( PresidentialPardonForm const & cp );
	private:
		std::string _target;
		int _Sign_Grade;
		int _Exec_Grade;
	
};	

#endif
