#include <iostream>
#include <string>



int main(){


	char ch = 'Q';
	char* p = &ch; 
	std::cout << *p << std::endl;
    ch = 'Z';
    std::cout << *p << std::endl; 
    *p = 'X'; 
    std::cout << ch << std::endl;
	return 0;
}