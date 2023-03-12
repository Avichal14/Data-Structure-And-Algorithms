#include<iostream>
using namespace std;
int main() {
     int n, l;
     cin >> n >> l;
     for (int row = 0;row < n;row++) {
          if (row == 0 || row == n - 1) {
               for (int col = 0;col < l;col++) {
                    cout << "* ";
               }
          }
          else {
               cout << "* ";
               for (int i = 0;i < l - 2;i++) {
                    cout << "  ";
               }
               cout << "* ";

          }
          cout << endl;
     }

}