/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    
    int count = 0;
    for(int r=0 ; r<n ; r++)
    {
        for(int c=0 ; c<r+1 ; c++)
        {
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}