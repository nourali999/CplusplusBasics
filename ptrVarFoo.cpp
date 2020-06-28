#include <iostream>
#include <string>
//using namespace std;

int main(){

int* ptr;
int var = 7;
int foo = 21;
ptr = &var;
ptr = &foo;
int& ref = var;

 std::cout<< var << std::endl;
 std::cout<< *ptr << std::endl;

 std::cout<< foo << std::endl;
 std::cout << &var << std::endl;
 std::cout<< ref << std ::endl;
std:: cout<< ptr << std::endl;
 return 0;


}