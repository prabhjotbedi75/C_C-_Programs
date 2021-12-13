#include<iostream>
using namespace std;
class Demo {
   public:
   int num1, num2;
   func(int n1, int n2) {
      num1 = n1;
      num2 = n2;
   }
   func(const Demo &n) {
      num1 = n.num1;
      num2 = n.num2;
   }
   void display() {
      cout<<"num1 = "<< num1 <<endl;
      cout<<"num2 = "<< num2 <<endl;
   }
};
int main() {
   func ob1(10, 20);
   func ob2 = ob1;
   ob1.display();
   ob2.display();
   return 0;
}
