//https://atcoder.jp/contests/abc160/tasks/abc160_b
#include<iostream>
using namespace std;

int main() {
  int X;
  cin >>X;
  int sum = 0;
  int quotient = 0;
  
  quotient = X/500; 
  sum += quotient * 1000; // 1000 points for each 500 coin
  
  X = X - (quotient * 500);
  
  quotient = X /5;
  sum += quotient * 5;
  cout <<sum;
  
}
