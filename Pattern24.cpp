/*
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
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
        for(int c=0 ; c<((2*r)+1) ; c++)
        {
            if(c%2 == 0)
            {
                count++;
                cout<<count;
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}