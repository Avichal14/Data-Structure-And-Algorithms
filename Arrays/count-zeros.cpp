#include<iostream>
using namespace std;
int main() {
     int arr[] = { 0,0,0,0,0,1,1,1,0 };
     int size = 9;
     int one = 0;
     int zero = 0;
     for (int i = 0;i < size;i++) {
          if (arr[i] == 1) {
               one++;
          }
          if (arr[i] == 0) {
               zero++;
          }

     }
     cout << one << endl;
     cout << zero << endl;


}