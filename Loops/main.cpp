#include <iostream>
using namespace std;

int main() {

  //****************************** Pattern Printing ********************************
  // ===============================hollow rectangle=================================
 // int row,col;
 // cin>>row>>col; 
 //   for(int i=0;i<row;i++){
 //     for(int j=0;j<col;j++){
 //       if(i==0 || i==row-1){
 //         cout<<"* ";
 //       }
 //       else{
 //         if(j==0 || j==col-1){
 //           cout<<"* ";
 //         }
 //         else{
 //           cout<<"  ";
 //         }
 //       }
      
 //     }
 //     cout<<endl;
  
 //   }


 // ====================================Half Pyramid==========================================
 int n;
 cin>>n;
//  for(int row=0;row<n;row=row+1){
//   for(int col=0;col<n-row;col++){
//     cout<<"* ";
//   }
//   cout<<endl;
//  }
//==================================== numerical half pyramid===================================
 for( int i=0;i<n;i++){
  for(int j=0;j<i+1;j++){
    cout<<j+1<<" ";
  }
  cout<<endl;
 }
















  return 0;
}