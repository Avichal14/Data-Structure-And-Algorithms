#include<iostream>
using namespace std;
int main() {
     int n;cin >> n;
     int space1 = n - 1;
     int space2 = 0;
     int c = 1;
     for (int i = 1;i <= n;i++) {
          for (int j = 1;j <= space1;j++) {
               cout << "  ";
          }
          for (int j = c;j >= 1;j--) {
               cout << j << " ";
          }
          for (int j = 1;j < space2;j++) {
               cout << "  ";
          }
          if (i != 1 && i != n) {
               for (int j = 1;j <= c;j++) {
                    cout << j << " ";
               }
          }
          cout << endl;
          if (i <= n / 2) {
               space1 -= 2;
               space2 += 2;
               c++;
          }
          else {
               space1 += 2;
               space2 -= 2;
               c--;
          }
     }
}