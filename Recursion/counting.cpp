#include<iostream>
using namespace std;
int count(int n) {
     if (n == 0)return 0;
     count(n - 1);
     return n;

}

int main() {
     int n;
     cin >> n;
     int ans = count(n);
     cout << ans << ' ';
}