/*
* 
* * 
*   * 
*     * 
* * * * * 
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
            if(c == 0 || r == c || r == n-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}