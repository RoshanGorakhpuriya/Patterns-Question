/*
* * * * 
* * * * 
* * * * 
* * * *
*/

#include<iostream>
using namespace std;

int main(){
  int n,m;
  cout<<"Enter row and column\n";
  cin>>n>>m;

  for(int r=0 ; r<n ; r++)
  {
    for(int c=0 ; c<m ; c++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}