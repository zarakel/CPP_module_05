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
		void	task( void ) const;
		RobotomyRequestForm( RobotomyRequestForm const & );
		void execute(Bureaucrat const & executor) const;
		~RobotomyRequestForm( void );

		RobotomyRequestForm & operator=( RobotomyRequestForm const & cp );

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
