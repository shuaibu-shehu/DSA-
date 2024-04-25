#include<iostream>
#include<conio.h>
#define MAX 20

using namespace std;
class depth
{
  private:
  int a[MAX][MAX],visited[MAX];
  int n,top;
  public:
    void init();
    void input();
    void dfs(int);
};


void depth::init()
{
  int i,j;
  for(i=0;i<MAX;i++)
  {
    visited[i]=0;
    for(j=0;j<MAX;j++)
     a[i][j]=0;
  }
  top=-1;
}


void depth::input()
{
  int i,j;
  cout<<"\nEnter the no. of nodes in a graph:";
  cin>>n;
  cout<<"\nEnter the adjacency matrix for graph\n";
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
     cin>>a[i][j];
}





void depth::dfs(int v)
{
  int i;
  visited[v]=1;
  cout<<v<<"->";
  for(i=1;i<=n;i++)
   if(a[v][i]==1 && visited[i]==0)
     dfs(i);
}

int main()
{
 depth ob;
 int start;
 //clrscr();
 ob.init();
 ob.input();
 cout<<"\n Starting node for DFS traversing:";
 cin>>start;
 cout<<"DFS traversing is:\n";
ob.dfs(start);
 getch();
}
