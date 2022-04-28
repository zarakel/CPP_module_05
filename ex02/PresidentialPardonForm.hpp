#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <fstream>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		void	task( void ) const;
		PresidentialPardonForm( PresidentialPardonForm const & );
		void execute(Bureaucrat const & executor) const;
		~PresidentialPardonForm( void );

		PresidentialPardonForm & operator=( PresidentialPardonForm const & cp );

        void beSigned( Bureaucrat const & A );
      /*  bool getSigned( void ) const;
        int get_Sign_Grade( void ) const;
        int get_Exec_Grade( void ) const;
        std::string getName( void ) const;*/
	private:
        std::string _target;
        int _Sign_Grade;
        int _Exec_Grade;
		bool _Signed;
	
};	

#endif
