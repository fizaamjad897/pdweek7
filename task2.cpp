#include<iostream>
using namespace std;
void staricpyramid(int rows);
main()
 {
    int rows;
    cout<< "Enter number of Rows: ";
    cin>>rows;
    staricpyramid(rows);
 }
 void staricpyramid(int rows)
  {
    for(int r = rows ; r >= 1 ; r--)
     {
        for(int c = 1 ; c <= r ; c++)
         {
            cout<<"*";
         }
        cout<<endl;
     }
  }
