#include<iostream>
using namespace std;
int main() {
     int size = 7;
     int arr[size];
     int i;
     for (i = 0;i < size;i++) {
          cin >> arr[i];
     }
     for (i = 0;i < size;i++) {
          if (i % 2 == 1) {
               cout << arr[i] << endl;
          }
     }

}