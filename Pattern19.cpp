/*
5
1 
1 2 
1   3 
1     4 
1 2 3 4 5
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    
    for(int r=0 ; r<n ; r++)
    {
        for(int c=0 ; c<r+1; c++)
        {
            if(r==0 || r==n-1 || c==0 || c==r+1-1)
            {
                cout<<c+1<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}