#include<iostream>
using namespace std;
int main()
{
    int i,j,line;
    cout<<"enter the numebr of line: ";
    cin>>line;
    for(i=0;i<line;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<line;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        return 0;
    }
}