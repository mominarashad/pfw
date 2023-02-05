#include<iostream>
using namespace std;
void nestedforexample(int rows);
void nestedforexample2(int rows);
main()
{
    int rows;
    cout<<"enter desired rows:";
    cin>>rows;
     nestedforexample2(rows);
    nestedforexample(rows);
   
}
void nestedforexample(int rows)
{
    for (int i=rows; i >= 1 ; i=i-1)
    {
        for (int z=rows; z>i; z=z-1)
        {
            cout << " ";
        }
        for(int j=1; j <= i; j=j+1)
        {
            cout<< "*";
        }
        cout << endl;
    }
}
 void nestedforexample2(int rows)
{
       for (int i=1; i <= rows; i=i+1)
    {
        for (int z=rows; z>i; z=z-1)
        {
            cout << " ";
        }
        for(int j=1; j <= i; j=j+1)
        {
            cout<< "*";
        }
        cout << endl;
    }
}
   