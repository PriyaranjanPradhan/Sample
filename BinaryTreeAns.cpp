#include<iostream>
using namespace std;


class node
{
public:
int data;
node * parent;
node * left;
node * right;
	
node()
{ data=0;
parent=NULL;
left=NULL;
right=NULL;
}
} *root;

void insert()
{
int dat;
cout<<"\nEnter data";
cin>>dat;
node *temp=new node;
node *add=new node;
add->data=dat;
temp->data=dat;
	
if(root==NULL)
{
root=temp;
root->parent=NULL;
root->left=NULL;
root->right=NULL;
}
else
{	
temp=root;
while(temp->left!=NULL||temp->right!=NULL)
{
if(temp->data>dat)
temp=temp->left;
else if(temp->data<dat)
temp=temp->right;
else if(temp->data=dat)
{
NULL;
}

}

if(temp->data>dat)
{
temp->left=add;
add->parent=temp;
}
else if(temp->data<dat)
{
temp->right=add;
add->parent=temp;
}
}
}

void search()
{
int a;
cout<<"\nEnter the element you want to search";
cin>>a;
int b=1;
	
node *temp=new node;
temp=root;
	 
while(temp->left!=NULL||temp->right!=NULL)
{
if(temp->data>a)
temp=temp->left;
else if(temp->data<a)
temp=temp->right;
else if(temp->data==a)
{b=0;
break;}
}
if(b==0)
cout<<"\nData Found";
else
cout<<"\nData not Found";
}

int display(node *temp)
{
if(temp==NULL)
{
return 0;
}
display(temp->left);
cout<<"\t"<<temp->data<<"--";
	
display(temp->right);
}

int main()
{
int a,n,k,achoice,bchoice;
cout<<"\nEnter the initial tree";
cout<<"\n Enter the number of nodes";
cin>>n;
cout<<"\n Enter the node keys";
for(int i=0;i<n;i++)
{
insert();
}
cout<<"\n";
a=display(root);
do{
cout<<"\nEnter option\n1)Insert\n2)Search\n3)Display";
cin>>achoice;
switch(achoice)
{
case 1: insert();
break;
case 2: search();
break;
case 3: a=display(root);
cout<<"\n";
break;
}
cout<<"\n Add more actions?\nIf yes press '1' if no press '0'";
cin>>bchoice;
}while(bchoice==1);

return 0;
}

