//https://codeforces.com/problemset/problem/1220/A
#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
    string s;
    cin>>s;
    int zero = 0, one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='z'){
            zero++;
        }
        if(s[i]=='n'){
            one++;
        }
    }
    while(one >0) {
        cout<<"1 ";
        one--;
    }
    while (zero >0){
        cout<<"0 ";
        zero--;
    }
}
