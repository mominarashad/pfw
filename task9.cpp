#include<iostream>
using namespace std;
void nestedforexample(int rows);
main()
{
    int rows;
    cout<<"enter desired rows:";
    cin>>rows;
    nestedforexample(rows);
}
void nestedforexample(int rows)
{
    for (int j=1; j=rows ; j++)
    {
        for (int i=1;i<=j; i--)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }
}