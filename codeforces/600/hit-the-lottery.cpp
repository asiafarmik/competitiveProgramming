//https://codeforces.com/problemset/problem/996/A
#include<iostream>
using namespace std;

int main() {
  int n;
  int notes=0;
  cin>>n;
  notes +=n/100;
  n = n%100;
  notes+=n/20;
  n =n%20;
  notes+=n/10;
  n =n%10;
  notes+=n/5;
  n =n%5;
  notes +=n;
  cout<<notes;
}
