// C++ program to show binary operator overloading 
#include <iostream> 
#include <ostream>
#include <vector>

class passanger{
    public:
    passanger(int number, std::string name){
        this->name = name;
        this->number = number;
    }
    std::string getName(){
        return name;
    }
    int getNumber(){
        return number;
    }
    private:
    int number;
    std::string name;
    friend bool operator==(passanger& x, passanger& y);
    friend std::ostream& operator<<(std::ostream& out, passanger& pass);

};

std::ostream& operator<<(std::ostream& os, passanger& pass){
    os << pass.name << std::endl;
    os << pass.number << std::endl;
    return os;
}
bool operator==(passanger& x, passanger& y){
        return x.name == y.name &&  x.number == x.number;
}

void loadPassanger() {
 std::vector<passanger*> bus(3);
 for(int i=0; i<bus.size(); i++){
     bus[i] = new passanger(55,"uchiha");
     std::cout << bus[i]->getName() <<std::endl;
     delete bus[i];
   }  
}
class person { 
    private:
        std::string name;
        std::string IdNum;
    public:
        person(const std::string& nm, const std::string& id){
           this->name = nm;
           this->IdNum = id;
        }
        void print();
        std::string getname();

};

void person::print(){
    std::cout << person::name << std::endl << person::IdNum << std::endl;
}

std::string person::getname(){
    return this->name;
}
class student : public person {
    private:
        std::string major;
        int gradYear;
    public:
        student(const std::string& nm, const std::string& id, const std::string& mj, int gy)
                :person(nm,id) { 
                    this->major = mj;
                    this->gradYear = gy;
                }
        void print();
        void changeMajor(const std::string& newMajor);
};
void student::print(){
    std::cout << this->getname() << std::endl;
}

// Driver Code 
int main() 
{ 
    //loadPassanger();
    person p1("noah","558833");
    p1.print();
    student s1("zaid","224455","cs",2020);
    s1.print();
    return 0;

} 