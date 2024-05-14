/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;
    
    for(int r=0 ; r<n ; r++)
    {
        int start_num_index = 8-r;
        int num = r+1;
        int count_num = num;
        
        for(int c=0 ; c<17 ; c++)
        {
            if((c == start_num_index) && (count_num >= 1))
            {
                cout<<num;
                count_num--;
                start_num_index+=2;
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}