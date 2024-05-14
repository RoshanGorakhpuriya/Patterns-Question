/*
1 
1 2 
1 2 3 
1 2 3 4 
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
        for(int c=0 ; c<=r ; c++)
        {
            cout<<c+1<<" ";
        }
        cout<<endl;
    }
}