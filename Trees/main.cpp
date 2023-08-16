#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data){
    this->data=data;
    left=NULL;
    right= NULL;
  }
};
Node* buildTree(){
  int data;
  cout<<"Enter data for the tree"<<endl;
  cin>>data;

  //bse ccase
  if(data==-1){
    return NULL;
  }
  // step 1
  Node* root=new Node(data);

  //step 2;
  cout<<"Enter data for the left part "<<data<<" NOde"<<endl;
  root->left=buildTree();

  //step 3;
  cout<<"Enter data for the right part "<<data<<" NOde"<<endl;
  root->right=buildTree();

  return root;
}
int main() {
  Node* root = NULL;
  root=buildTree();
  
  return 0;
}