/*
* * * * 
*     * 
*     * 
* * * * 
*/
#include<iostream>
using namespace std;

int main(){
    int n , m;
   
    cin>>n>>m;

    for(int r=0 ; r<n ; r++)
    {
      for(int c=0 ; c<m ; c++)
      {
        if(r ==0 || r == n-1 || c == 0 || c == m-1)
        {
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
      }
      cout<<endl;
    }
    /*
    for(int r=0 ; r<n ; r++)
    {
       for(int c=0 ; c<m ; c++)
       {
          if(r == 0 || r == n-1)
          {
              cout<<"* ";
          }
          else
          {
              if(c == 0 || c == m-1)
              {
                 cout<<"* ";
              }
              else
              {
                cout<<"  ";
              }
            }
       }
        cout<<endl;
  }
  */
}