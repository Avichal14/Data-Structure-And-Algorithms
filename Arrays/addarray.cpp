#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
     int arr[] = { 1,3,5,6 };
     int brr[] = { 2,4,8,97 };
     vector<int> res;
     int n = sizeof(arr) / sizeof(int);
     int m = sizeof(brr) / sizeof(int);
     int i = 0;
     int j = 0;
     while (i < n && j < m) {
          if (arr[i] < brr[j]) {
               res.push_back(arr[i]);
               i++;
          }
          else {
               res.push_back(brr[j]);
               j++;
          }

     }
     while (j < m) {
          res.push_back(brr[j]);
          j++;
     }
     while (i < n) {
          res.push_back(arr[i]);
          i++;
     }
     for (auto it : res) {
          cout << it << " ";
     }


}