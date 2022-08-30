/**
 * @file main.cpp
 * @author Vance Brenderabrandis
 * @date 2022-08-29
 * @brief Simple Summation Program and Hello World!
 * 
 * The program adds up every number from 1 to a positive integer n provided by the user. Also outputs Hello World! to console.
 */


#include <iostream>

using namespace std;


/**
 * Function to add up all numbers from 1 to positive int n
 *
 * @param int n Positive int provided by user to add up to
 * @return int Returns total of summation
 * 
 */
int sum(int n);


/**
 * Function to compute the products of all numbers from 1 to positive int n
 *
 * @param int n Int provided by user to multiply up to
 * @return int Returns total product of function
 * 
 */
int product(int n);

int main() {
  int n;
  int prod_num;

  cout << "Hello World!" << endl;
  
  cout << "Write a number to sum up from 1: ";
  cin >> n;
  cout << sum(n) << endl;

  cout << "Write a number to multiply up to from 1: ";
  cin >> prod_num;
  cout << product(prod_num) << endl;
  
  return 0;
}

int sum(int n) {
  int y = 0; // holds sum of ints
  
  for(int i = 1; i <= n; i++) {
    y += i;
  }
  
  return y;
}

int product(int n) {
  int product = 1; // holds product number

  for(int i = 1; i <= n; i++) {
    product *= i;
  }
  
  return product;
}
