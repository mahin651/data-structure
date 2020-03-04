#include<iostream>
using namespace std;
int a[20]; 
int n,val,i,pos;
void create();
int display();
void insert();
int remove();
int main()
{
int choice;
cout<<"\n\n--------MENU-----------\n";
cout<<"1.CREATE\n";
cout<<"2.display\n";
cout<<"3.INSERT\n";
cout<<"4.DELETE\n";
cout<<"5.EXIT\n";
cout<<"-----------------------";
while(1)
{
cout<<"\nENTER YOUR CHOICE:\n";
cin>>choice;
switch(choice)
{
case 1: create();
break;
case 2: display();
break;
case 3: insert();
break;
case 4: remove();
break;
case 5: return 0;
default: cout<<"\nInvalid choice:\n";
break;
}
}
}

void create()
{
cout<<"\nEnter the size of the array elements:\n";
cin>>n;
cout<<"\nEnter the elements for the array:\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
}
int display()
{
if(n==0)
{
cout<<"\t Array is empty; no elements to display\n";
return 0;
}
cout<<"\nThe array elements are:\n";
for(i=0;i<n;i++)
{
cout<<a[i];
}
}
void insert()
{
cout<<"\nEnter the position for the new element:\n";
cin>>pos;
if(pos<=n)
{
cout<<"\nEnter the element to be inserted :\n";
cin>>val;
for(i=n-1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=val;
n=n+1;
display();
}
else
{
cout<<" Invalid Position";
}
}

int  remove()
{
if(n==0)
{
cout<<"\t Array is empty; no elements to delete \n";
return 0;
}
cout<<"\nEnter the position of the element to be deleted:\t";
cin>>pos;
if(pos<=n-1)
{
val=a[pos];
cout<<"\n Deleted element is "<<val;
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
display();
}
else
{
cout<<" Invalid Position";
}
 return 0; }
