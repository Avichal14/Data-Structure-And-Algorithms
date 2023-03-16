#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& v, int n) {
     int temp = v[0];
     for (int i = 0;i < n - 1;i++) {
          v[i] = v[i + 1];
     }
     v[n - 1] = temp;
}
int main() {
     int n;
     cin >> n;
     vector<int >v;
     for (int i = 0;i < n;i++) {
          int x;cin >> x;
          v.push_back(x);
     }
     int rotate;
     cin >> rotate;
     for (int i = 0;i < rotate;i++) {
          rotate(v, n);
     }

     for (int i = 0;i < n;i++) {
          cout << v[i] << " ";

     }
}