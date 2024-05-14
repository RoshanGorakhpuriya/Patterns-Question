/*
1 2 3 4 5 
2     5 
3   5 
4 5 
5
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    
    for(int r=0 ; r<n ; r++)
    {
        for(int c=0 ; c<n-r ; c++)
        {
            if(r==0 || r==n-1 || c==0 || c==n-r-1)
            {
                cout<<c+r+1<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}