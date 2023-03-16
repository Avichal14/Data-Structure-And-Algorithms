#include<iostream>
#include<vector>
using namespace std;
int main() {
     int n;
     cin >> n;
     vector<int> v;

     int i;
     for (i = 0;i < n;i++) {
          int x;cin >> x;
          v.push_back(x);
     }
     vector<int> v2;
     vector<int> v1;
     if (v[i] % 2 == 0) {
          v1.push_back(v[i]);
     }
     else {
          v2.push_back(v[i]);
     }
     for (int i = 0;i < v1.size();i++) {
          cout << v1[i] << " ";
          cout << endl;
     }
     for (int i = 0;i < v2.size();i++) {
          cout << v2[i] << " ";
     }

}