// #include<bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;
int main() {
     int arr[] = { 3,3,43,3,2,3,5,15,1,0 };
     int size = 10;
     int mini = INT_MAX;
     for (int i = 0;i < size;i++) {
          if (arr[i] < mini) {
               mini = arr[i];
          }
     }
     cout << mini;
}