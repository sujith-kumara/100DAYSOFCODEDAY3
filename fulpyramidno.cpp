#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,space,i,j,k;
    cout<<"Enter the no of rows";
    cin>>rows;

    for(i=1,k=0;i<=rows;i++,k=0)
    {
    for(space=1;space<=rows-i;space++)
    {
        cout<<"   ";
    }
    while(k!=2*i-1)
    {
        cout<<" "<<k+1<<" ";
        ++k;
    }
    cout<<endl;
    }
    return 0;

}