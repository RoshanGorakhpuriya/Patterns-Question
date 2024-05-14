/*
1 
1 2 1 
1 2 3 2 1         
1 2 3 4 3 2 1     
1 2 3 4 5 4 3 2 1 
*/
#include<iostream>
using  namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    for(int r=0 ; r<n ; r++)
    {
        int count = 0;
        for(int c=0 ; c<=r ; c++)
        {
            count++;
            cout<<count<<" ";
        }
        count--;
        while(count >= 1)
        {
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
}