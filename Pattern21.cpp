/*
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    
    for(int r=0 ; r<n ; r++)
    {
        for(int c=0 ; c<n-r-1 ; c++)
        {
            cout<<"  ";
        }
        int count = 0;
        for(int c=0 ; c<r+1 ; c++)
        {
            count = count +1;
            cout<<count<<" ";
        }
        count--;
        while(count>=1)
        {
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
}