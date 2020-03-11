#include<iostream>
#include<string.h>
using namespace std;
int count=0;
struct stud
{
long long int ph;
int sem;
char name[15],usn[15],brnch[8];
struct stud *next;
}*head=NULL,*tail=NULL,*temp=NULL,*temp1;
void create(long long int n,int s,char na[20],char u[15],char b[5],int head,int temp)
{
if(head==NULL)
{
head=(struct stud*)new(1*sizeof(struct stud))
head->ph=n;
head->sem=s;
strcpy(head->name,na);
strcpy(head->usn,u);
strcpy(head->brnch,b);
head*next=NULL;
tail=head;
count++;
}
else
{
temp=(struct stud*)new(1*sizeof(struct stud));

temp*ph=n;
temp*sem=s;
strcpy(temp->name,na);
strcpy(temp->usn,u);
strcpy(temp->brnch,b);
temp*next=NULL;
tail*next=temp;
tail=temp;
count++;
}
}
void display()
{
temp1=head;
if(temp1==NULL)
{
cout<<"list is empty"<<endl;
}
else
{
cout<<"student details are as follows:"<<endl;
while(temp1!=NULL)
{
cout<<"-----------------------"<<endl;
cout<<"NAME:"<<temp1->name<<"USN:"<<temp1->usn<<"BRANCH:"<<temp1->brnch<<"sem:"<<temp->sem<<"PHONE NO."<<temp->ph;
cout<<"-----------------------\n";
temp1=temp1->next;
}
cout<<"no. of nodes="<<count;
}
}
void insert_head(long long int n,int s,char na[15],char u[15],char b[8],int head,int temp)
{
temp=(struct stud*)new(1*sizeof(struct stud));
temp->ph=n;
temp->sem=s;
strcpy(temp->name,na);
strcpy(temp->usn,u);

strcpy(temp->brnch,b);
temp->next=head;
head=temp;
count++;
}
void insert_tail(long long int n,int s,char na[15],char u[15],char b[8],int head,int temp)
{
temp=(struct stud*)new(1*sizeof(struct stud))
temp*ph=n;
temp*sem=s;
strcpy(temp->name,na);
strcpy(temp->usn,u);
strcpy(temp->brnch,b);
tail->next=temp;
temp->next=NULL;
tail=temp;
count++;
}
void delete_head()
{
temp1=head;
if(temp1==NULL)
{
cout<<"list is empty\n";
}
else
{
head=head->next;
cout<<"deleted node is:\n";
cout<<"-----------------------\n";
cout<<"NAME:"<<temp1->name<<"USN:"<<temp1->usn<<"BRANCH:"<<temp1->brnch<<"sem:"<<temp->sem<<"PHONE NO."<<temp->ph;
cout<<"-----------------------\n";
delete(temp1);
count--;
}
}
void delete_tail()
{
temp1=head;

if(temp1==NULL)
{
cout<<"list is empty\n";
}
while(temp1->next!=tail)
{
temp1=temp1->next;
}
cout<<"deleted node is:\n";
cout<<"-----------------------\n";
cout<<"NAME:"<<temp1->name<<"USN:"<<temp1->usn<<"BRANCH:"<<temp1->brnch<<"sem:"<<temp->sem<<"PHONE NO."<<temp->ph;
cout<<"-----------------------\n";
delete(tail);
tail=temp1;
tail->next=NULL;
count--;
}
int  main()
{
int choice;
long long int ph;
int sem;
char name[20],usn[15],brnch[5];
cout<<"--------MENU----------\n";
cout<<"1.create\n2.Insert from head\n3.Insert from tail\n4.Delete from head\5.Delete from tail\n6.display\n7.exit\n";
cout<<"----------------------\n";
while(1)
{
cout<<"enter your choice\n";
cin>>choice;
switch(choice)
{
case 1:cout<<"enter the name usn branch sem phno. of the student respectively\n";
 cin>>name>>usn>>brnch>>sem>>ph;
 create(ph,sem,name,usn,brnch);
 break;
case 2: cout<<"enter the name usn branch sem phno. of the student respectively\n";
cin>>name>>usn>>brnch>>sem>>ph;

 insert_head(ph,sem,name,usn,brnch);
 break;
case 3:cout<<"enter the name usn branch sem phno. of the student respectively\n";
cin>>name>>usn>>brnch>>sem>>ph;
 insert_tail(ph,sem,name,usn,brnch);
 break;
case 4:delete_head();
 break;
case 5:delete_tail();
 break;
case 6:display();
 break;
case 7: return 0;
default:cout<<"invalid option\n";
}
}
} 
