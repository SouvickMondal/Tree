#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int d){
        this->data = d;
        left = right = NULL;
    }
};
node* insertion(node *root,int x){
    if(root==NULL)
    {
        root = new node(x);
        return root;
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        if(temp->left==NULL){
            temp->left = new node(x);
            break;
        }
        else if(temp->right==NULL){
            temp->right = new node(x);
            break;
        }
        else{
            q.pop();

        }
    }


}
int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    return 0;
}
