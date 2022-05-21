#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,coeff=1,i,j,space;
    cout<<"Enter the no of rows";
    cin>>rows;
    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
               coeff=1;
            else
               coeff=coeff*(i-j+1)/j;
            cout<<coeff<<" ";
        }
        cout<<endl;

    }
    return 0;
}