#include <bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }   
    } 
}

void inOrder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //L N R
    inOrder(root->left);   
    cout<<root->data<<" ";
    inOrder(root->right);

}

void preOrder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //N L R
    cout<<root->data<<" ";
    preOrder(root->left); 
    preOrder(root->right);
}

void postOrder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //L R N
    postOrder(root->left); 
    postOrder(root->right);
    cout<<root->data<<" ";
}

//INSERTION
Node* insertIntoBst(Node* &root,int d){
    //base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d > root->data){
        //right part me insert karna hai
        root->right=insertIntoBst(root->right,d);
    }

    if(d < root->data){
        //left part me insert karna hai
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

int minValue(Node* root) {
    // Code here
    Node* temp=root;
    
    if(temp==NULL){
        return -1;
    }
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int maxValue(Node* root) {
    // Code here
    Node* temp=root;
    
    if(temp==NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}

//DELETION
Node *deleteNode(Node *root, int X) {
    // your code goes here
  //base case
        if(root==NULL){
            return root;
        }

        if(root->data==X){
            //0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }

            //1 child
            //left child exist
            if(root->left!=NULL && root->right==NULL){
                Node* temp=root->left;
                delete root;
                return temp;
            }
            //right child exist
            if(root->left==NULL && root->right!=NULL){
                Node* temp=root->right;
                delete root;
                return temp;
            }

            //2 child
            if(root->left!=NULL && root->right!=NULL){
                int min=minValue(root->right);
                root->data=min;
                root->right=deleteNode(root->right,min);
                return root;
            }
        }
        else if(root->data>X){
            //left part me jao
            root->left=deleteNode(root->left,X);
            return root;
        }
        else{
            //right part me jao
            root->right=deleteNode(root->right,X);
            return root;
        }
        return 0;
    
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}
int main(){
    Node* root=NULL;

    cout<<"Enter data to create to BST"<<endl;
    takeInput(root);

    deleteNode(root,27);
    deleteNode(root,3);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
    cout<<endl<<"Printing Inorder"<<endl;
    inOrder(root);
    cout<<endl<<"Printing preorder"<<endl;
    preOrder(root);
    cout<<endl<<"Printing postorder"<<endl;
    postOrder(root);
    cout<<endl<<"Print the min value"<<endl;
    cout<<minValue(root);
    cout<<endl<<"Print the max value"<<endl;
    cout<<maxValue(root);
    return 0;
}