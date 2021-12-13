#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
       string Name;
       int Age;
       string Company;
public:
void setname(string name){
    Name=name;
}
string getname(){
    return Name;
}
void setAge(int age){
    Age=age;
}
int getAge(){
    return Age;
}
void setCompany(string company){
    Company=company;
}
string getCompany(){
    return Company;
}
void AskForPromotion(){
 if(Age>30){
     cout<<Name<<" "<<"got Promoted"<<endl;
 }
 else{
     cout<<Name<<" "<<"can not get promoted"<<endl;
 }   
}
    void Introduction(){
        cout<<"My Name is "<<Name<<" "<<"and my age is "<<Age<<" "<<"and i work in "<<Company<<" "<<"Company:)"<<endl;
    }
    Employee(string name,int age,string company){
        Name=name;
        Age=age;
        Company=company;
    }
};

int main(){
    Employee e1 = Employee("Prabhjot",18,"Google");
    Employee e2 = Employee("Harshit",25,"Google");
    e1.setAge(35);
    e1.AskForPromotion();
    e2.AskForPromotion();
}