#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,i,j,number=1;
    cout<<"Enter the number of rows";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<"\n";
    }
    return 0;
}