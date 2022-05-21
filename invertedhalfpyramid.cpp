#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter the number of rows";
    cin>>row;
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}