#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat c("jack", 5);
	Bureaucrat d("jack junior", 6);
	Form *doc = new RobotomyRequestForm("chichi");
	PresidentialPardonForm moc("jerome");
	doc->beSigned(d);
	/*doc.execute(c);
	moc.beSigned(c);
	moc.execute(c);*/

	d.executeForm( *doc );
}
