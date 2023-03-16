#include<iostream>
using namespace std;
bool checkp(string s, int i, int j) {
     while (i <= j) {
          if (s[i] != s[j]) {
               return false;
          }
          i++;j--;

     }
     return true;
}
bool valid(string s) {
     int i = 0;
     int j = s.length() - 1;
     while (i <= j) {
          if (s[i] != s[j]) {
               return checkp(s, i + 1, j) || checkp(s, i, j - 1);
          }
          else {
               i++;
               j--;
          }
     }
     return true;
}
int main() {
     string s;cin >> s;
     cout << valid(s);

}