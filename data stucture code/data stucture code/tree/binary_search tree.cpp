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

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node *parent;

};

Node *create_node(int n)
{
    Node *new_node= (Node *) malloc(sizeof(Node));
    new_node->data=n;
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->parent=NULL;
    return new_node;

}

void add_left_child(Node *parent,Node *child)
{
    parent->left=child;
    if(child!=NULL)
    child->parent=parent;

}

void add_right_child(Node *parent,Node *child)
{

    parent->right=child;
      if(child!=NULL)
    child->parent=parent;
}

Node *create_bst_tree(Node *root,Node *node)
{

    if(root==NULL)
    {
        root=node;
        return root;

    }
    Node *current_node =root;
    Node *parent_node;

    while(current_node!=NULL)
    {
        parent_node=current_node;

        if(node->data<=current_node->data)
            current_node=current_node->left;
        else current_node=current_node->right;


    }
    if(node->data<=parent_node->data)
        add_left_child(parent_node,node);
    else add_right_child(parent_node,node);




    return root;
}

Node *create_bst()
{
    int a[]= {10,5,17,3,7,12,19,1,4,13};
    Node *new_node;
    Node*root=create_node(a[0]);


    for (int i=1; i<10; i++ )
    {

        new_node=create_node(a[i]);

        root=create_bst_tree( root,new_node);


    }


    return root;
}


void inorder_travers(Node *root)
{
    if(root==NULL) return;

    inorder_travers(root->left);
    cout<<root->data<<",";
    inorder_travers(root->right);

}

Node *bst_search(Node *root,int data)
{
    Node *current_node=root;

    while(current_node!=NULL)
    {
        if(current_node->data==data) break;
        else if(data<current_node->data) current_node=current_node->left;
        else current_node=current_node->right;
    }

    if(current_node==NULL) cout<< "not found"<<endl;
    else {
        cout << "found\n";
        return current_node;
    }

return NULL;
}

Node *bst_minimum_node(Node *current_node)
{
    while(current_node->left!=NULL)
    {
        current_node=current_node->left;
    }

    return current_node;

}


Node *bst_transform(Node *root,Node *current_node,Node *node)
{

    if(current_node==root)
        root=node;
    else if(current_node==current_node->parent->left)
             add_left_child(current_node->parent,node);
    else add_right_child(current_node->parent,node);
    return root;
}

Node *bst_remove_node(Node *node, Node *root)
{
    if(node->left==NULL)
    {
        root=bst_transform(root,node,node->right);
         free(node);
    }

    else if(node->right==NULL)
    {
        root=bst_transform(root,node,node->left);
          free(node);
    }

    else {
            Node *min_node= bst_minimum_node(node->right);


            if(min_node->parent!=node)
            {
                add_left_child(min_node->parent,min_node->right);
              add_right_child(min_node,node->right);
         }

        root=bst_transform(root,node,min_node);

             add_left_child(min_node,node->left);
              free(node);

            }



        return root;
    }


void preorder_travers(Node *root)
{
    if(root==NULL) return;
    cout<<root->data<<",";
    preorder_travers(root->left);
    preorder_travers(root->right);

}




int main()
{
    Node *root= create_bst();
    inorder_travers(root);
    cout<<endl;

    int n;
   while(1)
   {
        cin>>n;
Node *node=bst_search(root,n);

root=bst_remove_node(node,root);
 inorder_travers(root);
  cout<<endl;

   }

    return 0;
}
