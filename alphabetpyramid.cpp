#include<bits/stdc++.h>
using namespace std;
int main()
{
    char input,alphabet ='A';
    int i,j;
    cout<<"Enter the last letter in upper case which is to be printed in the last line ";
    cin>>input;
    for (i=1;i<=(input-'A'+1);i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<alphabet<<" ";
        
        }
        ++alphabet;
        cout<<endl;
    }
    return 0;
}