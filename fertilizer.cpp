#include <iostream>
using namespace std;
main(){

float size;
float cost_bag;
float area;

cout << "Enter bag size in pound: ";
cin>> size;

cout << "Enter cost of the bag: ";
cin>> cost_bag;

cout<< "Enter area covered by each bag in spuare feet: ";
cin>> area;

float costPerPound = cost_bag / size;

float costPerSquare = cost_bag/area;

cout << "Cost of the fertilizer per pound: " << costPerPound << endl;
cout<< "Cost of fertilizing the area per square feet: "<< costPerSquare;















}