#include <iostream>
using namespace std;
main(){
float vegPriceKg;
float fruitPriceKg;
int totalKgVeg;
int totalKgFruit;




cout<< "Enter vegetable price per kilogram: ";
cin>> vegPriceKg;

cout << "Enter fruit price per kilogram: ";
cin>> fruitPriceKg;

cout << "Enter total kilograms of vegetables: ";
cin>> totalKgVeg;

cout << "Enter total kilograms of fruits: ";
cin>> totalKgFruit;


float earning = (vegPriceKg * totalKgVeg) + (fruitPriceKg * totalKgFruit);
float total_earning = earning /1.94;



float rupees = total_earning * 1.94;
cout<< "Total earning is: "<< rupees;

 


















}