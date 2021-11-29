//chapter 3 exercise 10
//Jenna Busch

//  UCF COP3330 Assignment 5 Solution
//  Copyright 2021 Jenna Busch


#include <iostream>
using namespace std;

int main() {

  string op;
  double num1;
  double num2;
  double result;

  //read in the variables
  cout << "Enter an operation and two numbers \n";
  cout << "operation:";
    cin >> op;
  cout << "number one:";
    cin >> num1;
  cout << "number two:";
    cin >> num2; 


  //perform the operation based on input
  if(op == "+")
  {
    result = num1 + num2;
    cout << "result: "<< result;
  }
  else if(op == "-")
  {
    result = num1 - num2;
    cout << "result: "<< result;
  }
  else if(op == "*")
  {
    result = num1*num2;
    cout << "result: "<< result;
  }
  else if(op == "/")
  {
    result = num1/num2;
    cout << "result: "<< result;
  }
  else
  {
    cout << "Entry is not valid.";
  }

  return 0;
} 