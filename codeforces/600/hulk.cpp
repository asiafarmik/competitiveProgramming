//https://codeforces.com/problemset/problem/705/A

#include<iostream>
using namespace std;

int main() {
  int n;
  cin >>n;
  
  cout<<"I ";
  for(int i =1; i<=n;i++) {
    if(i%2 ==0) {
    cout<<"love ";
    }
    else {
    cout <<"hate ";
    }
    if(i!=n) {
      cout<<"that I ";
    }
  }
  cout <<"it";
}
