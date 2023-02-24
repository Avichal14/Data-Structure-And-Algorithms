#include<iostream>
using namespace std;
int squareroot(int n) {
     int ans = 1;
     for (int i = 0;i < n;i++) {
          if (i * i <= n) {
               ans = i;
          }
     }
     return ans;
}
int main() {


     int result = squareroot(26);
     cout << result;
}
