//https://codeforces.com/problemset/problem/1186/A

#include<iostream>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    
    if(min(n,k)>=n)
    {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}
