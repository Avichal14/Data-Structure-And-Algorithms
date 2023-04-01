#include<iostream>
using namespace std;
void printsub(string str, string output, int i) {
     //base case
     if (i >= str.length()) {
          cout << output << endl;
          return;
     }
     //exclude
     printsub(str, output, i + 1);

     // include
     output.push_back(str[i]);
     printsub(str, output, i + 1);
}
int main() {
     string str = "abc";
     string output = "";
     int i = 0;
     printsub(str, output, i);
     return 0;
}