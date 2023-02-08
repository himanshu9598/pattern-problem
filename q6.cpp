#include<iostream>
using namespace std;

int main()
{
    int i,j,lines;
    cout<<"enter the numebr of lines to be print" <<endl;
    cin>>lines;
    for(i=0;i<lines;i++){
        for(j=0;j<lines;j++){
            if(i==0||i==lines-1||j==0||j==lines-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";

    }
    cout<<"\n";

    return 0;
}