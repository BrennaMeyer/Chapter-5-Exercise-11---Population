// Chapter 5 Exercise 11 - Population.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer:Brenna Meyer
//Date:03/17/2025
//Requirements:Write a program that will predict the size of a population of organisms.
//The program should ask the user for the starting number of organisms,their average daily population increase(as a percentage),
//and the number of days they will multiply.A loop should display the size of the population for each day.
// //Input Validation : Do not accept a number less than 2 for the starting size of the population.
//Do not accept a negative number for average daily population increase. Do not accept a number less than 1 for the number of days they will multiply.

#include <iostream>
using namespace std;

int main()
{
    float starting_num_organisms,
        daily_pop_increase,
        size_of_daily_pop;

    int num_days_multiply;
    //number organisms
    cout << "Please enter the starting number of organisms:";

    while (!(cin >> starting_num_organisms) || starting_num_organisms < 2)
    {
        cout << "Starting number must be 2 or more." << endl;
        cout << "Enter the starting number of organisms:";
    
    }
    //Daily population
    cout << "Please enter the average daily population increase by percentage:";

    while (!(cin >> daily_pop_increase) || daily_pop_increase < 0)
    {
        cout << "Average daily population increase must be greater than 0. \n"
            << "Enter average daily population increase by percentage:";
          }

    daily_pop_increase *= 0.01;
    //Number days Multiply 
    cout << "Enter the number of days they will multiply:";

    while (!(cin >> num_days_multiply) || num_days_multiply<1)
    {
        cout << "The number of days must NOT be less than 1.\n"
            << "Enter the number of days they will multiply:";
         }

    for (int i = 0; i < num_days_multiply; i++)
    {
        cout << "Population size for day" << (i + 1);
        cout << ":" << starting_num_organisms << endl;

        starting_num_organisms += (starting_num_organisms * daily_pop_increase);
    }

    return 0;

}

