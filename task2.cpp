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
        for (int i=rows; i>=1; i=i-1)
    {
        for(int j=1; j <= i; j=j+1)
        {
            cout<< "*";
        }
        cout << endl;
    }
}