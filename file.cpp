#include <iostream>
#include <fstream>
#include<stdio.h>
#include <string>
using namespace std;

int main () {
  int count,n,thresh=5;
  string line;
  
  ifstream myfile ("a.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      ++count;
    }
  cout << "\nThe number of lines are: " << count << "\n";
 if(count <= thresh)
{ 
  n=count;
  int a[n][n],i,j,row,col,k=0;
  int b[n*n];
  for(i=0;i<n;i++)
{
   for(j=0;j<n;j++)
  {
  a[i][j]=0;
  }
 }
 ifstream infile("a.txt");
while(infile >> i)
{
b[k]=i;
k++;
}
for(k=0;k<n*n;k++)
{

cout << b[k];
}
}
else 
{

} 
 } 
myfile.close();
  return 0;
}
