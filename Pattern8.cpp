/*
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    for(int r=n-1 ; r>=0 ; r--)
    {
        for(int c=0 ; c<=r ; c++)
        {
            cout<<c+1<<" ";
        }
        cout<<endl;
    }
}