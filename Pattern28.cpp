/*
1 
2 * 3 
4 * 5 * 6 
7 * 8 * 9 * 10 
11 * 12 * 13 * 14 * 15 
11 * 12 * 13 * 14 * 15 
7 * 8 * 9 * 10 
4 * 5 * 6 
2 * 3 
1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int count = 1;
    for(int r=0 ; r<n ; r++)
    {
        for(int c=0 ; c<((2*r)+1) ; c++)
        {
            if(c%2 == 0)
            {
                cout<<count<<" ";
                count++;
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    int start = count-n;  // 11-4 = 7
    for(int r=0 ; r<n ; r++)
    {
        int k = start;
        for(int c=0 ; c<((2*(n-r))-1) ; c++)
        {
            if(c%2 == 0)
            {
                cout<<k<<" ";
                k++;
            }
            else
            {
                cout<<"* ";
            }
        }
        start = start - (n-r-1); 
        cout<<endl;
    }

    
}