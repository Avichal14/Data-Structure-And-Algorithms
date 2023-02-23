#include<iostream>
using namespace std;
int main() {
     int n = 4;
     int power = 4;
     int ans = 1;
     int temp = 1;
     while (temp <= power) {
          ans = ans * n;
          temp = temp + 1;
     }
     cout << ans;


}



