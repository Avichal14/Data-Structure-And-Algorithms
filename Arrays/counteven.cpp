#include<iostream>
using namespace std;
int main() {
     int arr[] = { 1,2,3,1,4,5, 9,5,3 };
     int n = sizeof(arr) / sizeof(arr[0]);
     for (int i = 0;i < n;i++) {
          int curr_elem = arr[i];
          int count = 0;
          for (int j = 0;j < n;j++) {
               if (arr[j] == curr_elem) {
                    count++;
               }
          }
          if (count % 2 == 0) {
               bool is_present = false;
               for (int j = i - 1;j >= 0;j--) {
                    if (arr[j] == curr_elem) {
                         is_present = true;
                         break;
                    }
               }
               if (is_present == false) {
                    cout << arr[i] << ' ';
               }
          }

     }
}