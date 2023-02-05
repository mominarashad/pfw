#include<iostream>
using namespace std;
main()
{
    int period;
    cout<<"enter the period:";
    cin>>period; 
    int treated=0;
    int untreated=0;
    int doctors=7;
    int currentday;  
     
    for(int d=1; d<=period; d++)
    { 
        cout<<"enter the patient coming on current day:";      
        cin>>currentday;
           
           if(untreated>treated && d%3==0) 
            {            
                 doctors++;       
            }                 

           if(currentday > doctors)
            {            
	              treated = treated+ doctors;
	              untreated += currentday - doctors;      
            } 
    
          else
            { treated += currentday;  }       
     } 
     cout<<"the number of treated patients:"<<treated<<endl;
     cout<<"the number of untreated patients:"<<untreated; 
}     

    
