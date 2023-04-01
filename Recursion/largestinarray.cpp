#include<iostream>
using namespace std;
void largest(int arr[], int n, int i, int& maxi) {
     //Base case
     if (i >= n) {
          return;

     }
     // 1 case solve krdo
     if (arr[i] > maxi) {
          maxi = arr[i];
     }
     largest(arr, n, i + 1, maxi);
}
int main() {
     int arr[] = { 10,20,12,34,556,23233,33 };
     int n = 7;
     int i = 0;
     int maxi = INT_MIN;
     largest(arr, n, i, maxi);
     cout << maxi << ' ';
}