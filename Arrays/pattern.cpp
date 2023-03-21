#include<iostream>
using namespace std;
int main() {
     int n;cin >> n;
     int st = 0;
     for (int i = 1;i < 2 * n - 1;i++) {
          for (int j = 1;j <= n - i;j++) {
               cout << "* ";
          }
          for (int j = 0;j < st;j++) {
               cout << "  ";
          }
          for (int j = 1;j <= n - i;j++) {
               cout << "* ";
          }
          st += 2;
          cout << endl;
     }
}