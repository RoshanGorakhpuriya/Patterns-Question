/*
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    for(int r=1 ; r<=n ; r++)
    {
        for(int c=0 ; c<n-r ; c++)
        {
            cout<<" ";
        }
        int C = 1;
        for(int c=1 ; c<=r ; c++)
        {
            cout<<C<<" ";
            C = C * (r-c)/c;
        }
        cout<<endl;
    }
}