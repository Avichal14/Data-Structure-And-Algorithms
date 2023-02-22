#include<iostream>
#include<vector>
using namespace std;
int finduniq(vector<int> arr) {
     int ans = 0;
     for (int i = 0;i < arr.size();i++) {
          ans = ans ^ arr[i];
     }
     return ans;
}
int main() {
     int n;
     cout << "enter";
     cin >> n;

     vector<int> arr(n);
     cout << "Enter elements" << endl;
     for (int i = 0;i < arr.size();i++) {
          cin >> arr[i];

     }
     int uniqele = finduniq(arr);
     cout << "the unique element is " << uniqele << endl;


     return 0;
}