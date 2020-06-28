// C++ program to show binary operator overloading 

#ifndef LIB_WORK_PASSANGER_FILE_GUARD
#define LIB_WORK_PASSANGER_FILE_GUARD

#include <iostream> 
#include <ostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdlib.h>


class passanger{
    public:
    passanger(int num, std::string nm, std::string lm);
 
    std::string& operator[](int i);
	    
    std::string& getName();

    std::string& getLastName();
    
	int getNumber();

    void changeName(std::string& nm);

    std::string& getNumberString();
    private:
  	  	int number;
   	    std::string lastname;
   		std::string name;
  		std::string num1;
 	    friend bool operator==(passanger& x, passanger& y);
        friend std::ostream& operator<<(std::ostream& out, passanger& pass);


};


#endif 