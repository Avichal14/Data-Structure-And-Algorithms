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

void levelOrderTraversal(Node* root){
  queue<Node*>q;
  //initially push root node;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    // A temp=q.front();
    Node * temp=q.front();
    //B pop
    q.pop();
    if(temp==NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      //C
    cout<<temp->data<<" ";
    //D
    if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }

    }

    
  }
  
}
int height(Node* root){

    if(root==NULL){
      return 0;

    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int ans=max(leftHeight,rightHeight)+1;
    return ans;
  }

bool kthAncestor(Node* root,int &k, int p){
  //base case
  if(root==NULL){
    return false;

  }
  if(root->data==p){
    return true;
  }
  bool left=kthAncestor(root->left,k,p);
  bool right=kthAncestor(root->right,k,p);

  //wapas are honge 

  //check left ya riht me ans hai ya nhi 
  if( left || right){
    k--;
  }
  if(k==0){
    cout<< "Answer : "<<root->data<<endl;
    k=-1;
  }
  return left||right;
}
int main() {
  Node* root = NULL;
  root=buildTree();
  // levelOrderTraversal(root);
  // cout<<endl;
  // cout<<"height: "<<height(root)<<' ';

  int k=1;
  int p=4;
  bool found=kthAncestor(root,k,p);
  return 0;
}