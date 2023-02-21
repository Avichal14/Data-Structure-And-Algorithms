#include<iostream>
#include<limits.h>
using namespace std;
int main() {
     int arr[] = { 4,5,6,7,8,9,0,12,22,33 };
     int size = 10;
     int maxx = INT_MIN;
     for (int i = 0;i < size;i++) {
          if (arr[i] > maxx) {
               maxx = arr[i];
          }
     }
     cout << "The maximum no in array is: " << maxx;
}
