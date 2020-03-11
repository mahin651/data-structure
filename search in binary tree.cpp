#include <iostream>
using namespace std;
struct BST
{
int data;
struct BST *left;
struct BST *right;
};
typedef struct BST NODE;
NODE *node;
NODE* createtree(NODE *node, int data)
{
if (node == NULL)
{
NODE *temp;
temp= (NODE*)malloc(sizeof(NODE));
temp->data = data;
temp->left = temp->right = NULL;
return temp;
}
if (data < (node->data))
{
node->left = createtree(node->left, data);
}
else if (data > node->data)
{
node -> right = createtree(node->right, data);
}
return node;
}
NODE* search(NODE *node, int data)
{

if(node == NULL)
cout<<"\nElement not found";
else if(data < node->data)
{
node
->left=search(node
->left, data);
}
else if(data > node->data)
{
node->right=search(node->right, data);
}
else
cout<<"\nElement found is: "<< node->data;
return node; 
}
void inorder(NODE *node) {
if(node != NULL) {
inorder(node->left);
cout<<"\t"<< node->data;
inorder(node->right);
}}
void preorder(NODE *node) {
if(node != NULL) {
cout<<"\t"<<node->data;
preorder(node->left);
preorder(node->right);
}}
void postorder(NODE *node) {
if(node != NULL) {
postorder(node->left);
postorder(node->right);
cout<<"\t"<< node->data;
}
}
NODE* findMin(NODE *node)
{
if(node==NULL)
{
return NULL;
}
if(node->left)
return findMin(node->left);
else
return node;
}
NODE* del(NODE *node, int data)
{
NODE *temp;
if(node == NULL)
{
cout<<"\nElement not found";
}
else if(data < node->data)
{
node->left = del(node->left, data);
}
else if(data > node->data)
{
node->right = del(node->right, data);
}
else
{

if(node->right && node->left)
{

temp = findMin(node->right);
node -> data = temp->data;

node -> right = del(node->right,temp->data);
}
else

{

temp = node;
if(node->left == NULL)
node = node->right;
else if(node->right == NULL)
node = node->left;
free(temp);
}
}
return node;
}
int main()
{
int data, ch, i, n;
NODE *root=NULL;
while (1)
{
cout<<"\n1.Insertion in Binary Search Tree";
cout<<"\n2.Search Element in Binary Search Tree";
cout<<"\n3.Delete Element in Binary Search Tree";
cout<<"\n4.Inorder\n5.Preorder\n6.Postorder\n7.Exit";
cout<<"\nEnter your choice: ";
cin>>ch;
switch (ch)
{
case 1: cout<<"\nEnter N value: " ;
cin>>n;
cout<<"\nEnter the values to create BST like(6,9,5,2,8,15,24,14,7,8,5,2)\n";
for(i=0; i<n; i++)
{
cin>>data;
root=createtree(root, data);
}
break;
case 2: cout<<"\nEnter the element to search: ";
cin>>data;
root=search(root, data);
break;
case 3: cout<<"\nEnter the element to delete: ";
cin>>data;
root=del(root, data);
break;
case 4:cout<<"\nInorder Traversal: \n";
inorder(root);
break;
case 5:cout<<"\nPreorder Traversal: \n";
preorder(root);
break;
case 6: cout<<"\nPostorder Traversal: \n";
postorder(root);
break;
case 7: return 0;
default:cout<<"\nWrong option";
break;
}
}
}
