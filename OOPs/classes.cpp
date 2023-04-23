#include<iostream>
using namespace std;

class Animal {
public:
     int age;
     string name;

     void eat() {
          cout << "Eating" << endl;

     }
     void sleep() {
          cout << "Sleeping" << endl;
     }
};
int main() {
     // Animal avichal;
     // avichal.age = 45;
     // avichal.name = "Babbar";
     // cout << avichal.name << endl;
     // avichal.eat();
     Animal* suresh = new Animal;


}