#include<iostream>
#include<vector>

using namespace std;
int main() {
     // vector<int> arr {10, 20, 30, 40};
     vector <int> arr;

     arr.push_back(10);
     arr.push_back(20);
     arr.push_back(30);
     arr.push_back(40);
     for (int i = 0;i < arr.size();i++) {
          int element = arr[i];
          int j = 1;
          for (int j = i + 1;j < arr.size();j++) {
               cout << "(" << element << "," << arr[j] << ")" << endl;
          }
     }
     return 0;
}