#include<iostream>
#include<vector>
using namespace std;
int main() {

     vector<int> v;
     int n;
     cin >> n;
     for (int i = 0;i < n;i++) {
          int x;cin >> x;
          v.push_back(x);
     }
     int st = 0;
     int end = n - 1;
     while (st <= end) {
          if (v[st] == v[end]) {
               st++;
               end--;
               cout << "palindoreme";
          }
          else {
               cout << "no";
          }

     }

}