//https://codeforces.com/problemset/problem/785/A

#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int sum=0;
  string s;
  char c;
  for(int i =0; i<n; i++)
  {
  cin>>s;
  c =s[0];
  switch(c)
  {
    case('T'): sum = sum + 4;
              break;
    case('C'): sum = sum + 6;
              break;
    case('O'): sum = sum + 8;
              break;
    case('D'): sum = sum + 12;
                  break;
    case('I'): sum = sum + 20;
                  break;
  
  }
      
  
  }
  cout<<sum;

}
