#include<iostream>
#include<vector>
using namespace std;
bool checksort(vector<int>& arr, int& n, int i) {
     //Base case
     if (i == n - 1) {
          return true;
     }
     // 1 case solve krdo
     if (arr[i + 1] < arr[i]) {
          return false;
     }
     //baki recursion smbhal lega
     return checksort(arr, n, i + 1);
}
int main() {
     vector<int> v{10, 20, 30, 40};
     int n = v.size();
     int i = 0;
     bool issort = checksort(v, n, i);
     if (issort) {
          cout << "Sorted" << endl;
     }
     else {
          cout << "NOt sorted" << endl;
     }
}