#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
    string Name;
    int Age;
    string Company;
    void Introduction(){
        cout<<"My Name is "<<Name<<" "<<"and my age is "<<Age<<" "<<"and i work in "<<Company<<" "<<"Company..:)"<<endl;
    }
    Employee(string name,int age,string company){
        Name=name;
        Age=age;
        Company=company;
    }
};
int main(){
    Employee e1=Employee("Prabhjot",21,"Google");
    e1.Introduction();
    Employee e2=Employee("Harshit",21,"Google");
    e2.Introduction();
}