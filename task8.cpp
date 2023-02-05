#include<iostream>
using namespace std;
void currentCargo(float countCargo, float tonnage);

main()
{   
    float countCargo;
    float tonnage;

    cout << "Enter count of cargo for transportation: ";
    cin >> countCargo;
    currentCargo(countCargo, tonnage);

}
void currentCargo(float countCargo, float tonnage)
{
    float Minibus=0;
    float Truck=0;
    float Train=0;
    float price1=0;
    float price2=0;
    float price3=0;
    float sum=0;
    for(float count=0; count<countCargo; count++)
    {
        cout << "Enter tonnage of current cargo: ";
        cin >> tonnage;
        sum=sum+tonnage;
        
        if (tonnage<=3)
        {
            Minibus=Minibus+tonnage;
            price1=price1+(tonnage*200);

        }
        else if (tonnage >3 && tonnage<=11)
        {
            Truck=Truck+tonnage;
            price2=price2+(tonnage*175);
        }
        else 
        {
            tTrain=Train+tonnage;
            price3=price3+(tonnage*120);
        }
    }
        float averagePercentage;
        averagePercentage=(price1+price2+price3)/sum;
        cout << averagePercentage << endl;

        float percentage1;        
        percentage1=(Minibus*100.0)/sum;
        cout << percentage1 << "%" << endl; 

        float percentage2;
        percentage2=(Truck*100.0)/sum;
        cout << percentage2 << "%" << endl;

        float percentage3;
        percentage3=(Train*100.0)/sum;
        cout << percentage3 << "%" << endl;
        

}