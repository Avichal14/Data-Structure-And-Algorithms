#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main() {
     int sum = 0;
     vector<int> v;
     int n;
     cin >> n;
     for (int i = 0;i < n;i++) {
          int x;
          cin >> x;
          v.push_back(x);
     }
     for (int i = 0;i < n;i++) {
          sum = sum + v[i];
     }
     int avg = sum / n;
     cout << sum;
}