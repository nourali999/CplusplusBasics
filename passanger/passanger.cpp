#include "passanger.h"


    passanger::passanger(int num, std::string nm, std::string lm){
        this->name = nm;
        this->number = num;
        this->lastname = lm;
    }

    
    std::string& passanger::getName(){
        return name;
    }
    std::string& passanger::getLastName(){
        return lastname;
    }
    int passanger::getNumber(){
        return number;
    }
    void passanger::changeName(std::string& nm){
        this->name =nm;
    }

    std::string& passanger::getNumberString(){
        num1 = std::to_string(number);
        return num1;
    }

   std::string& passanger::operator[](int i){
         if(i==0){
            return this->name;
         }
         if(i==1){
             return this->getLastName();
         }
         if(i==2){
             return this->getNumberString();
         }

   }

std::ostream& operator<<(std::ostream& out, passanger& pass){
    out << pass.name << std::endl;
    out << pass.number << std::endl;
    return out;
}
bool operator==(passanger& x, passanger& y){
        return x.name == y.name &&  x.number == x.number;
}

void loadPassanger() {
 std::vector<passanger*> bus(3);
 for(int i=0; i<bus.size(); i++){
     bus[i] = new passanger(55,"uchiha","unicorn");
     std::cout << bus[i]->getName() <<std::endl;
     delete bus[i];
   }  
}