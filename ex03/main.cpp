#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat b("Raiden", 130);
	Bureaucrat c("jack", 5);
	Bureaucrat d("jack junior", 6);

/*	RobotomyRequestForm doc("chichi");
	PresidentialPardonForm moc("jerome");
	ShrubberyCreationForm loc("Titouan");

	doc.beSigned(c);
	c.executeForm(doc);
	doc.resetSigned();
	b.executeForm(doc);
	d.executeForm(doc);

	moc.beSigned(c);
	c.executeForm(moc);

	loc.beSigned(c);
	c.executeForm(loc);

	moc.beSigned(b);
	b.executeForm(moc);*/
	Intern e;
	Form * D;
	D = e.makeForm("ShrubberyCreationForm", "Nouma");
	std::cout << D->get_Sign_Grade() << std::endl;
	D->resetSigned();
	
}
