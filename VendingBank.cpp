/*
 * VendingBank.cpp
 * Program 1
 * Tuesday, September 20,2022
 * shihua Yu
*/

#include "TimeSpan.h"
#include <iostream>
using namespace std;
int main() {
  TimeSpan a(3, 2, 1);
  cout << "a: " << a << endl;
  TimeSpan b(3, 2, 63);
  cout << "b(3,2,63): " << b << endl;
  cout << "a + b: " << a + b << endl;
}
