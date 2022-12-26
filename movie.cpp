#include <iostream>
using namespace std;
main(){

string name;
float adultPrice;
float childPrice;
float no_adult;
float no_child;
float donate_prcntg;


cout <<"Enter Movie Name: ";
cin>> name;

cout << "Enter Adult Ticket Price: ";
cin>> adultPrice;

cout << "Enter Child Ticket Price: ";
cin>> childPrice;

cout << "Enter Number of Adult Ticket Sold: ";
cin>> no_adult;

cout << "Enter Number of Child Ticket Sold: ";
cin>> no_child;

cout << "Enter Percentage to Donate: ";
cin>> donate_prcntg;

float amount_earned = (adultPrice * no_adult) + (no_child * childPrice);
cout << "Total Amount Generated: " << amount_earned << endl;


float charity = (amount_earned  * donate_prcntg)/100;
float after_charity = amount_earned - charity;


cout << "Amount after donation: "<< after_charity;
























}