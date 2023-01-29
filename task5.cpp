#include<iostream>
using namespace std;
int numofdots(int trianglenumber);
main()
 {
    int trianglenumber, result;
    cout<< "Enter triangle number: ";
    cin>>trianglenumber;
    result = numofdots(trianglenumber);
    cout<<result;
 }
 int numofdots(int trianglenumber)
  {
    int dots = 1;
    int difference = 2;
    while(difference <= trianglenumber)
     {
        dots = dots + difference;
        difference ++;
     }
    return dots;
  }

