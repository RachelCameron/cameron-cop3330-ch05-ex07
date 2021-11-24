/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rachel Cameron
 */

#include "header.h"

void quadratic_formula(double a, double b, double c){
   double root1, root2;
   if(a == 0){
       cout<<"A cannot be zero.";
   }
   else if((b * b - 4 * a * c) == 0){
       root1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
       cout<<"Your single root: " << root1;
   }
   else if((b * b - 4 * a * c) > 0){
       root1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
       root2 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);
       cout<< "Root 1: " << root1 << "\nRoot 2: " << root2;
   }
   else{
       cout << "No real roots.";
   } 
}

int main()
{
    double a, b, c;
    cout << "Enter a: " << endl;
    cin>>a;
    cout << "Enter b: " << endl;
    cin>>b;
    cout << "Enter c: " << endl;
    cin>>c;
    quadratic_formula(a, b, c);
}