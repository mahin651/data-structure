#include <iostream>
using namespace std;
int stack[6],rev[6];
int top=-1,k=0;
int size;
void push();
void pop();
void display();
int pali();
int main()
{
int choice,f;
cout<<"Enter the size for stack\n";
cin>>size;
cout<<"1.Push\n2.Pop\n3.Display\n4.Check for Palindrome\n5.Exit\n";
while(1)
{
cout<<"Enter the choice\n";
cin>>choice;
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:f=pali();
if(f==1)
cout<<"It's Palindrome\n";
else
cout<<"It's not a Palindrome\n";
break;
case 5:return 0;
default:cout<<"Wrong choice...\n";
}}}
void push()
{
int num;
if(top==(size-1))
{
printf("Stack Overflow\n");
}
else
{
cout<<"Enter the number to be pushed\n";
cin>>num;
top++;
stack[top]=num;
}}
void pop()
{
int num;
if(top==-1)
{
cout<<"Stack Underflow\n";
}
else
{
num=stack[top];
cout<<"Popped element is \n"<<num<<endl;
top--;
}}
void display()
{
int i;
if(top==-1)
{
cout<<"Stack Underflow\n";
}
else
{
cout<<"Stack Contents....\n";
for(i=top;i>=0;i--)
{
cout<<stack[i]<<endl;
rev[k++]=stack[i];
}}}
int pali()
{
int i,flag=1;
for(i=top;i>=0;i--)
{
if(stack[i]!=rev[--k])
{
flag=0;
}}
return flag;
}
