/*
A 
A B A 
A B C B A 
A B C D C B A 
A B C D E D C B A 
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        char ch = 'A';
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
       ch--;
       while(ch >'A')
       {
        ch--;
        cout<<ch<<" ";
       }
       cout<<endl; 
    }
}