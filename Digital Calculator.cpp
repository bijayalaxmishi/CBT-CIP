#include<iostream>
#include<cmath>

using namespace std;

int main()

{
// define variables
string operation;
double number1, number2;

//get the user input
cout<<"Enter first number:";
cin>>number1;
cout<<"Enter operation (+,-,*,/):";
cin>>operation;
cout<<"Enter second number:";
cin>>number2;


// if else statement checking entered operation 
if (operation=="+"){
     cout<<number1+number2;
}
else if (operation=="-"){
     cout<<number1-number2;
}
else if (operation=="*"){
     cout<<number1*number2;
}
else if(operation=="/"){
     cout<<number1/number2;
}
else{
    cout<<"Not known!!";
}
return 0;
}