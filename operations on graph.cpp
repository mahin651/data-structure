#include<iostream>
using namespace std;
int a[20][20],q[20],visited[20],reach[10],n,i,j,f=0,r=-1,count=0;
void bfs(int v)
{
for(i=1;i<=n;i++)
if(a[v][i] && !visited[i])
q[++r]=i;
if(f<=r)
{
visited[q[f]]=1;
bfs(q[f++]);
}
}
void dfs(int v)
{
int i;
reach[v]=1;
for(i=1;i<=n;i++)
{
if(a[v][i] && !reach[i])
{
cout<<"\n d->d"<<v<<i;
count++;
dfs(i);
}
}
}
int main()
{
int v, choice;
cout<<"\n Enter the number of vertices:";
cin>>n;
for(i=1;i<=n;i++)
{
q[i]=0;
visited[i]=0;
}
for(i=1;i<=n-1;i++)
reach[i]=0;
cout<<"\n Enter graph data in matrix form:\n";
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
cout<<"1.BFS\n 2.DFS\n 3.Exit\n";
cin>>choice;
switch(choice)
{
case 1: cout<<"\n Enter the starting vertex:";
cin>>v;
bfs(v);
if((v<1)||(v>n))
{
cout<<"\n Bfs is not possible";
}
else
{
cout<<"\n The nodes which are reachable from:\n"<<v;
for(i=1;i<=n;i++)
if(visited[i])
cin>>i;
}
break;
case 2:dfs(1);
if(count==n-1)
cout<<"\n Graph is connected";
else
cout<<"\n Graph is not connected";
break;
case 3: return 0;
}
}
