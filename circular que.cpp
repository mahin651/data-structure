#include <iostream>
using namespace std;
#include <string.h>
#define SIZE 5
char CQ[SIZE];
int front=-1, rear=-1;
int ch;
void CQ_Insert();
void CQ_Delet();
void CQ_Display();
int main()
{
cout<<"1.Insert"<<endl
<<"2.Delete"<<endl
<<"3.Display"<<endl
<<"4.Exit"<<endl;

while(1)
{
cout<<"Enter your choice\n";
cin>>ch;
switch(ch)
{
case 1: CQ_Insert();
break;
case 2:CQ_Delet();
break;
case 3:CQ_Display();
break;
case 4: return 0;
}}}
void CQ_Insert() {
char ele;
if(front==(rear+1)%SIZE) {
cout<<"Circular Queue Full"<<endl;

return; }
if(front==
-1)
front++;
cout<<"Enter the element to be inserted"<<endl;

cin>>ele;
rear = (rear+1)%SIZE;
CQ[rear] =ele; }
void CQ_Delet() {
char item;
if(front ==
-1)
{
cout<<"Circular Queue Empty"<<endl;
return; }
else if(front == rear) {
item=CQ[front];
cout<<"Deleted element is:  "<<item;

front=
-1;
rear=
-1;
}
else {
item =CQ[front];
cout<<"Deleted element is:  "<<item<<endl;

front = (front+1)%SIZE; }}
void CQ_Display()


{
int i;
if(front==-1)
cout<<"Circular Queue is Empty"<<endl;
else
{
cout<<"Elements of the circular queue are..  "<<endl;
for(i=front;i!=rear;i=(i+1)%SIZE)
{
cout<<CQ[i]<<endl;
}
cout<<CQ[i]<<endl;
}
}
