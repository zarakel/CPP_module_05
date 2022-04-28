#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat c("jack", 5);
	ShrubberyCreationForm doc("chichi");
	doc.beSigned(c);
	doc.execute(c);
}
