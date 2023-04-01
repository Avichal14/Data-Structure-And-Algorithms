#include<iostream>
using namespace std;
int facto(int n) {
     if (n == 1)return 1;
     int chotiproblem = facto(n - 1);
     int badiproblem = n * chotiproblem;
     return badiproblem;
}
int main() {
     int n;
     cin >> n;
     int ans = facto(n);
     cout << ans << ' ';
}