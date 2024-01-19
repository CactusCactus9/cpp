#include "Bureaucrat.hpp"
#include "AForm.hpp"

//--------def constructor--------//
Bureaucrat::Bureaucrat(){};

//--------copy constructor--------//
Bureaucrat::Bureaucrat(const Bureaucrat &obj){
	*this = obj;
}

//--------throw exceptions--------//
const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("grade too high");
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("grade too low");
}

//--------parameterized constructor--------//
Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

//--------Getters--------//
int	Bureaucrat::getGrade()const{
	return (this->_grade);
}

std::string	Bureaucrat::getName()const{
	return (this->_name);
}

//--------copy assignment operator--------//
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other){
	if (this != &other)//_name is const
		this->_grade = other.getGrade();
	return (*this);
}

//--------Others--------//
void	Bureaucrat::incrementGrade(){
	if ((this->_grade) - 1 < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}
void	Bureaucrat::decrementGrade(){
	if ((this->_grade) + 1 > 150)
		throw GradeTooLowException();
	this->_grade += 1;
}
void	Bureaucrat::signForm(AForm &f){
	try {
		f.beSigned(*this);
	}
	catch (std::exception	&e){
		std::cout << this->_name << " couldn't sign " << f.getTheName() << " because " << e.what() << std::endl;
	}
	if (f.getIfSigned() == true)
		std::cout << this->_name << " signed " << f.getTheName() << std::endl;
}
void	Bureaucrat::executeForm(AForm &form){
try{
	form.execute(*this);
}
catch(const char* exp){
	std::cout << exp << std::endl;
	return ;
}
catch(std::exception	&e){
	std::cout << this->getName() << " couldn't execute " << form.getTheName() << " because " << e.what()<< std::endl;
	return ;
}
	std::cout<< this->getName() << " executed " << form.getTheName()<< " successfully!" << std::endl;
}

//--------Destructor--------//
Bureaucrat::~Bureaucrat(){};

//--------operator overload--------//
std::ostream	&operator<<(std::ostream &strm, const Bureaucrat &other){
	strm << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (strm);
}