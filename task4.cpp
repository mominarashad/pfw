#include<iostream>
using namespace std;
void triangle(int seq);
main()
{
    int seq;
    cout<<"enter the sequence:";
    cin>>seq;
    triangle(seq);

}
void triangle(int seq)
{   int sum=0;
    for(int count=1; count<=seq; count++)
    {
        sum=sum+count;
    }
    cout<<sum;
}