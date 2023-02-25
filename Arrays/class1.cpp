#include<iostream>
using namespace std;
int maxno(int a, int b) {
     if (a > b) {
          cout << "First no is greater";
     }
     else {
          cout << "Second no is greater ";
     }
     return 0;
}
int main() {
     maxno(5, 6);
}