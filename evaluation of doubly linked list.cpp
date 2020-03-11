#include<iostream>
#include <string.h>
using namespace std;
struct Enode
{
char ssn[15];
char name[20];
char dept[5];
char designation[10];
int salary;
long long int phno;
struct Enode *left;
struct Enode *right;
}*head=NULL;
struct Enode *tail,*temp1,*temp2;
void create(char [],char [],char [],char [],int ,long long int);
void ins_beg(char [],char [],char [],char [],int ,long long int);
void ins_end(char [],char [],char [],char [],int ,long long int);
void del_beg();
void del_end();
void display();
int count=0;
int main()
{
int choice;
char s[15],n[20],dpt[5],des[10];
int sal;
long long int p;
cout<<"1.Create\n2.Display\n3.Insert at beginning\n4.Insert at End\n5.Delete atbeginning\n6.Delete at End\n7.Exit\n";
while(1)
{
cout<<"\nEnter your choice\n";
cin>>choice;
switch(choice)
{
case 1: cout<<"Enter the required data(Emp no,Name,Dept,Desig,sal,phone)\n";
cin>>s>>n>>dpt>>des>>sal>>p;
create(s,n,dpt,des,sal,p);
break;
case 2: display();
break;
case 3:cout<<"Enter the required data (Emp no,Name,Dept,Desig,sal,phone)\n";
cin>>s>>n>>dpt>>des>>sal>>p;
ins_beg(s,n,dpt,des,sal,p);
break;
case 4: cout<<"Enter the required data(Emp no,Name,Dept,Desig,sal,phone)\n";
cin>>s>>n>>dpt>>des>>sal>>p;
ins_end(s,n,dpt,des,sal,p);
break;
case 5: del_beg();
break;
case 6: del_end();
break;
case 7: exit(0);
}
}
}
void create(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
if(head==NULL)
{
head=(struct Enode *)malloc(1*sizeof(struct Enode));
strcpy(head->ssn,s);
strcpy(head->name,n);
strcpy(head->dept,dpt);
strcpy(head->designation,des);
head->salary=sal;
head->phno=p;
head->left=NULL;
head->right=NULL;
tail=head;
}
else
{
temp1=(struct Enode *)malloc(1*sizeof(struct Enode));
strcpy(temp1->ssn,s);
strcpy(temp1->name,n);
strcpy(temp1->dept,dpt);
strcpy(temp1->designation,des);
temp1->salary=sal;
temp1->phno=p;
tail->right=temp1;
temp1->right=NULL;
temp1->left=tail;
tail=temp1;
}
}
void display()
{
temp1=head;
cout<<"Employee Details ......\n";
while(temp1!=NULL)
{
cout<<"------------------\n";
cout<<temp1->ssn<<endl<<temp1->name<<endl<<temp1->dept<<endl<<temp1->designation<<endl<<temp1->salary<<endl<<temp1->phno;
cout<<"------------------";
temp1=temp1->right;
}
}
void ins_beg(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
temp1=(struct Enode *)malloc(1*sizeof(struct Enode));
strcpy(temp1->ssn,s);
strcpy(temp1->name,n);
strcpy(temp1->dept,dpt);
strcpy(temp1->designation,des);
temp1->salary=sal;
temp1->phno=p;
temp1->right=head;
head->left=temp1;
head=temp1;
temp1->left=NULL;
}
void ins_end(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
temp1=(struct Enode *)malloc(1*sizeof(struct Enode));
strcpy(temp1->ssn,s);
strcpy(temp1->name,n);
strcpy(temp1->dept,dpt);
strcpy(temp1->designation,des);
temp1->salary=sal;
temp1->phno=p;
tail->right=temp1;
temp1->left=tail;
temp1->right=NULL;
tail=temp1;
}
void del_beg()
{
temp1=head->right;
free(head);
head=temp1;
head->left=NULL;
}
void del_end()
{
temp1=tail->left;
free(tail);
tail=temp1;
tail->right=NULL;
}
