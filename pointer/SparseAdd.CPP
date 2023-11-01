#include<iostream>
using namespace std;

main()
{

 int a1=0,b1=0,i,j,k,l,a[5][5],b[9][3],c[5][5],d[9][3],s[20][3],m,n,p,q;


 cout<<"enter row and col size";
 cin>>m>>n;

 cout<<"Enter mat 1 elements:";

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>a[i][j];
    if(a[i][j]!=0)
     {
     a1++;
     }
  }
 }

b[0][0]=m;
b[0][1]=n;
b[0][2]=a1;

 for(i=0,k=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]!=0)
    {
	b[k+1][0]=i;
	b[k+1][1]=j;
	b[k+1][2]=a[i][j];
	k++;
    }
  }
 }


cout<<"\n";
 for(i=0;i<=a1;i++)
 {
  for(j=0;j<n;j++)
  {
       cout<<b[i][j]<<" ";
   }
   cout<<"\n";
 }
cout<<"\n";
cout<<"Enter mat 2 elements:";

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>c[i][j];
    if(c[i][j]!=0)
     {
     b1++;
     }
  }
 }

d[0][0]=m;
d[0][1]=n;
d[0][2]=b1;

 for(i=0,k=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(c[i][j]!=0)
    {
	d[k+1][0]=i;
	d[k+1][1]=j;
	d[k+1][2]=c[i][j];
	k++;
    }
  }
 }


cout<<"\n";
 for(i=0;i<=b1;i++)
 {
  for(j=0;j<n;j++)
  {
       cout<<d[i][j]<<" ";
   }
   cout<<"\n";
 }

   s[0][2]=0;
for(i=0,k=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
  if(a[i][j]!=0 ||  c[i][j]!=0)
     {
       s[k+1][0]=i;
       s[k+1][1]=j;
       s[k+1][2]=a[i][j]+c[i][j];
       k++;
       s[0][2]+=1;
      }
 }
 }
s[0][0]=m; s[0][1]=n;
       cout<<"\n";
 for(i=0;i<=k;i++)
 {
  for(j=0;j<3;j++)
  {
       cout<<s[i][j]<<" ";
   }
   cout<<"\n";
 }


}

