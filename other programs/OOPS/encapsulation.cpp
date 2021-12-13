#include<bits/stdc++.h>
using namespace std;
class Employee{
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
    Employee e1 = Employee("Prabhjot",21,"Google");
    Employee e2 = Employee("Harshit",21,"Google");
    e1.setAge(18);
    cout<<e1.getAge();
}