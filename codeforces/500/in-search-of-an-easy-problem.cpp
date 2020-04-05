//https://codeforces.com/problemset/problem/1030/A
#include<iostream>
using namespace std;
int main () {
  int n;
  cin>>n;
  int choice = 0;
  for(int i =0; i <n; i++)
  {
  cin >>choice;
  if(choice){
    break;
  }
  }
  if (choice)
  {
  cout<<"HARD";
  }
  else {
    cout<<"EASY";
  }
}
