#include<iostream>
using namespace std;
void amplifier(int usernum);
main()
 {
    int usernum;
    cout<< "Enter number: ";
    cin>>usernum;
    amplifier(usernum);
 }
 void amplifier(int usernum)
  {
    for(int i = 1 ; i <= usernum ; i++)
     {
        int value = i;
        if(i % 4 == 0)
         {
           value = value * 10;
         }
        if(i < usernum)
         {
            cout<<value <<",";
         }
        if(i == usernum)
         {
            cout<<value;
         }
     }
  }