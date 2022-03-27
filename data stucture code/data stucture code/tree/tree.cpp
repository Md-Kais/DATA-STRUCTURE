#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Node{
public:
    int data;
    Node *left_child;
    Node *right_child;

};

Node *create_node(int n)
{
    Node *new_node= (Node *) malloc(sizeof(Node));
    if(new_node==NULL)
    {
        cout<< "error"<<endl;
        exit(1);
    }
    new_node->data=n;
    new_node->left_child=NULL;
    new_node->right_child=NULL;

return new_node;

}

void add_left_child(Node *parent,Node *child)
{
    parent->left_child=child;

}

void add_right_child(Node *parent,Node *child)
{
    parent->right_child=child;

}

void preorder_travers(Node *root)
{
    if(root==NULL) return;
    cout<<root->data<<",";
    preorder_travers(root->left_child);
    preorder_travers(root->right_child);

}

void inorder_travers(Node *root)
{
    if(root==NULL) return;

    inorder_travers(root->left_child);
    cout<<root->data<<",";
    inorder_travers(root->right_child);

}

void postorder_travers(Node *root)
{
    if(root==NULL) return;

    postorder_travers(root->left_child);
    postorder_travers(root->right_child);
    cout<<root->data<<",";

}




 Node *create_tree()
 {
     Node *two=create_node(2);
     Node *seven=create_node(7);
     Node *nine=create_node(9);
     add_left_child(two,seven);
     add_right_child(two,nine);


     Node *one=create_node(1);
     Node *six=create_node(6);
     add_left_child(seven,one);
     add_right_child(seven,six);


     Node *five=create_node(5);
     Node *ten=create_node(10);
     add_left_child(six,five);
     add_right_child(six,ten);


     Node *eight=create_node(8);
     add_right_child(nine,eight);

    Node *three=create_node(3);
     Node *four=create_node(4);
     add_left_child(eight,three);
     add_right_child(eight,four);


     return two;
 }


int main()
{
    Node *root=create_tree();
    preorder_travers(root);

     cout<<endl;
    inorder_travers(root);
     cout<<endl;
    postorder_travers(root);

return 0;
}
