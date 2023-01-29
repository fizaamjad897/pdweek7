#include<iostream>
using namespace std;
void avgprice(int numofcargos);
main()
 {
    int numofcargos;
    cout<< "Enter number of cargos: ";
    cin>>numofcargos;
    avgprice(numofcargos);
 }
 void avgprice(int numofcargos)
  {
    int numoftons;
    float minibus = 0, train = 0, truck = 0;
    float totaltons, percminibus, perctruck, perctrain, averageprice;
    for(int c = 1 ; c <= numofcargos ; c++)
     {
        cout<<"Enter no. of tons: ";
        cin>>numoftons;
        if(numoftons <= 3)
         {
          minibus = numoftons + minibus;
         }
        if(numoftons > 3 && numoftons <= 11)
         {
          truck = numoftons + truck;
         }
        if(numoftons > 11)
         {
          train = numoftons + train;
         }
     }
    totaltons = minibus + truck + train;
    averageprice = ((minibus * 200) + (truck * 175) + (train * 120)) / totaltons;
    percminibus = (minibus / totaltons) * 100;
    perctruck = (truck / totaltons) * 100;
    perctrain = (train / totaltons) * 100;
    cout<< "Average price: " <<averageprice <<endl;
    cout<< "Minibus percentage: " <<percminibus <<"%" <<endl;
    cout<< "Truck percentage: " <<perctruck <<"%" <<endl;
    cout<< "Train percentage: " <<perctrain <<"%" <<endl;
  }
