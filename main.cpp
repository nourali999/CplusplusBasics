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
    std::string& operator[](int i);
    
    std::string& getName(){
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

   std::string& passanger::operator[](int i){
         if(i==0){
            return this->name;
         }
         if(i==1){
             return this->getName();
         }
    }







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
       virtual ~person(){

        }
        person(const std::string& nm, const std::string& id){
           this->name = nm;
           this->IdNum = id;
        }
        virtual void print();
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
        virtual ~student(){

        }
        student(const std::string& nm, const std::string& id, const std::string& mj, int gy)
                :person(nm,id) { 
                    this->major = mj;
                    this->gradYear = gy;
                }
        virtual void print();
        void changeMajor(const std::string& newMajor);
};
void student::print(){
    std::cout << this->getname() << std::endl  << this->major << std::endl;
}

void student::changeMajor(const std::string& newMajor){
    this->major = newMajor;
}

template <typename T>
T getMin(T a, T b){
   return (a < b ? a : b);
}

template <typename E>
E getMax(E a, E b){
    return (a > b ? a : b);

}





// Driver Code 
int main() 
{ 
    //loadPassanger();
    // person *pp[2];
    // pp[0] = new person("noah","558833");
    // pp[1] = new student("zaid","224455","cs",2020);
    // pp[1]->print();
    // student *s1 = dynamic_cast<student*>(pp[1]);
    // s1->changeMajor("Computer");
    // pp[1]->print();

    // std::cout << getMin<int>(5,6) << std::endl;
    // std::cout << getMax<int>(5,6) << std::endl;

    passanger p(5,"noah");

    std::cout<< p[1] << std::endl;




    






    //student *s1 =new student("zaid","224455","cs",2020);
   // s1->print();
    //delete s1;
    return 0;

} 