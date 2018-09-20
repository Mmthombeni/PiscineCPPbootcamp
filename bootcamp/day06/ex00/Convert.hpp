
#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include <string>
 
class Convert{

public:
	Convert(void);
	Convert(std::string input);
	Convert(Convert & src);
	virtual ~Convert(void);
	Convert &operator=(Convert const & rhs);
	
	operator char(void) const;
	
	class ConversionErrorException : public std::exception{
        public:
            virtual const char* what() const throw();

    };
	
private:
	std:: string _input;
};

#endif