/*Assignment 1 — Sensor Data Analysis

A robot takes 10 distance readings using an ultrasonic sensor. Write a C++ program to analyze the readings.

Requirements:

Take 10 readings and store them in an array.
Find the maximum and minimum readings using if.
Calculate the average.
Count readings below 20 cm and above 100 cm.
Use loops to process the array.
Do not use built-in functions for maximum/minimum.*/

#include <iostream>
using namespace std;
int main() 
{  int a[10];
   cout<<"Enter 10 readings";
   int i;
   for(i=0;i<10;i++)
       cin>>a[i];
   int max=a[0];
   int min=a[0];
   int l=0,m=0;
   for(i=0;i<10;i++)
       { if(a[i]>max)
           max=a[i];
       if(a[i]<min)
         min=a[i];
       if(a[i]<20)
           l++;
       if(a[i]>100)
         m++;}
   float avg=(max+min)/2;
   cout<<"Maximum is "<<max;
   cout<<"\nMinimum is "<<min;
   cout<<"\nAverage is "<<avg;
   cout<<"\nReadings below 20cm = "<<l;
   cout<<"\nReadings above 100cm = "<<m;
   
   return 0;
}