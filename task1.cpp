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
    for (int i=1; i<=rows ; i++)
    {
        for (int j=1;j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}