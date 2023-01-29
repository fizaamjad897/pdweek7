#include<iostream>
using namespace std;
void clacperc(int usernum);
main()
 {
   int usernum;
   cout<< "Enter number of integers: ";
   cin>>usernum;
   clacperc(usernum);
 }
 void clacperc(int usernum)
  {
    int digit;
    float div2= 0, div3 = 0 , div4 = 0;
    float perc2= 0.00 , perc3= 0.00 , perc4 = 0.00;
    for(int c = 1 ; c <= usernum ; c++)
     {
        cout<< "Enter digit: ";
        cin>>digit;
      if(digit % 2 == 0)
       {
        div2++;
       } 
      if(digit % 3 == 0)
       {
        div3++;
       }
      if(digit % 4 == 0)
       {
        div4++;
       }
     }
    perc2 = (div2 / usernum) * 100;
    perc3 = (div3 / usernum) * 100;
    perc4 = (div4 / usernum) * 100;
    cout<<perc2  <<"%" <<endl;
    cout<<perc3  <<"%" <<endl;
    cout<<perc4  <<"%" <<endl;
  }


