#include <iostream>
using namespace std;
main(){

int input;

cout << "Enter the four Digit Number: ";
cin>> input;



int firstDig = input % 10;

int secondDig= (input/10)%10;

int thirdDig = (input/100)%10;

int fourthDig = (input/1000)%10;


int sum = firstDig + secondDig + thirdDig + fourthDig;
cout << "Total: " << sum;




 




















}