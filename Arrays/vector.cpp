#include<iostream>
#include<vector>
using namespace std;
int main() {
     int n;
     cin >> n;
     vector<int> arr(n, -1);

     // cout << arr.size();
     // // int ans = (sizeof(arr) / sizeof(int));
     // cout << ans << endl;

     // arr.push_back(5);
     // arr.push_back(6);
     for (int i = 0;i < arr.size();i++) {
          cout << arr[i] << endl;
     }
     // // }
     // arr.pop_back();
     // for (int i = 0;i < arr.size();i++) {
     //      cout << arr[i] << endl;
     // }
     cout << arr.empty();
}