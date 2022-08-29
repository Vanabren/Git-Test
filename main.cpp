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

int main() {
  int n;

  cout << "Hello World!" << endl;
  
  cout << "Write a number to sum up from 1: ";
  cin >> n;
  cout << sum(n) << endl;
  
  return 0;
}

int sum(int n) {
  int y = 0; // holds sum of ints
  for(int i = 1; i <= n; i++) {
    y += i;
  }
  
  return y;
}
