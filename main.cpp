// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>
//identifying variables
int main()
{
double days, hotel_expense, meal_expense, total;

std::string location;
  // Variables
std::cout << "What is the business trip location? ";
std::cin >> location;

std::cout << "How many days will the trip take? ";
std::cin >> days;

std::cout << "What is the total hotel expense? ";
std::cin >> hotel_expense;

std::cout << "What is the total meal expense? ";
std::cin >> meal_expense;
  // Equation for the total
total = hotel_expense + meal_expense;
  // Answers for the equation
std::cout << std::setw(10) << "Location " << location;
std::cout << std::setw(10) << "Days " << days;
std::cout << std::setw(10) << "Hotel  " << hotel_expense;
std::cout << std::setw(10) << "Meal " << meal_expense;
std::cout << std::setw(10) << "Total  " << total << std:: endl;
}
