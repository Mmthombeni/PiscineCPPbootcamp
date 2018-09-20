#include <iostream>
#include "Convert.hpp"

Convert::Convert(std::string input) : _input(input)
{
	return;
}

Convert::Convert(Convert & src)
{
	*this = src;
	return;
}

Convert & Convert::operator=(Convert const & rhs)
{
	this->_input = rhs._input;
	return (*this);
}

Convert::operator char(void) const
{
	int outcome = 0;
	
	try{
		outcome = std::stoi(this->_input);
	}
	catch (const std::exception & e){
		throw Convert::ConversionErrorException();
	}
	return (static_cast<char>(outcome));
}


const char* Convert::ConversionErrorException::what() const throw()
{
	return ("impossible");
}