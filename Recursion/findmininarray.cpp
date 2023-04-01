#include<iostream>
using namespace std;
void findmin(int arr[], int n, int i, int& mini) {
     //base condition 
     if (i >= n) {
          return;
     }
     // 1 condition solve krlo
     mini = min(mini, arr[i]);
     //baki recursion smbhal lega
     findmin(arr, n, i + 1, mini);
}
int main() {
     int arr[] = { 1,2,3,4,5,6,7,-1 };
     int n = 8;
     int i = 0;
     int mini = INT_MAX;
     findmin(arr, n, i, mini);
     cout << mini;
}