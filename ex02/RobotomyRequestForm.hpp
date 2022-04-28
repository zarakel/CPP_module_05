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
		void	task( void ) const;
		ShrubberyCreationForm( ShrubberyCreationForm const & );
		void execute(Bureaucrat const & executor) const;
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & cp );

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
