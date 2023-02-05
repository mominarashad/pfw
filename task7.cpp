#include<iostream>
using namespace std;
void percentage(int countNumbers, int integer);

main()
{   
    int countNumbers;
    int integer;

    cout << "lines of input integers: ";
    cin >> countNumbers;
    percentage(countNumbers, integer);

}
void percentage(int countNumbers, int integer)
{   
    float count1=0;
    float count2=0;
    float count3=0;
    for(int count=0; count<countNumbers; count++)
    {

        cout << "Enter integer ";
        cin >> integer;

        if(integer % 2 == 0)
        {
            count1=count1+1;
        }
        if(integer % 3 == 0)
        {
            count2=count2+1;
        }
        if(integer% 4 == 0)
        {
            count3=count3+1;
        }
    }
    float percentage1=0;
    percentage1=(count1/countNumbers)*100;
    cout << percentage1 << "%" << endl;

    float percentage2=0;
    percentage2=(count2/countNumbers)*100;
    cout << percentage2 << "%" << endl;

    float percentage3=0;
    percentage3=(count3/countNumbers)*100;
    cout << percentage3 << "%" << endl;


}