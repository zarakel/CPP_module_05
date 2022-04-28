#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form( void );
		Form( std::string const name, int const Sign_Grade, int const Exec_Grade);
		Form( Form const &, std::string const name,  int const Sign_Grade, int const Exec_Grade);
		~Form( void );

		virtual Form & operator=( Form const & ) = 0;
		virtual void beSigned( Bureaucrat const & A ) = 0;
		virtual bool getSigned( void ) const = 0;
		virtual int get_Sign_Grade( void ) const = 0 ;
		virtual int get_Exec_Grade( void ) const = 0 ;
		virtual std::string getName( void ) const = 0;

	private:
		bool _Signed;
		int const _Sign_Grade;
		int const _Exec_Grade;
		std::string const _name;
};

std::ostream & operator<<( std::ostream & os, Form const & original );

#endif
