//https://codeforces.com/problemset/problem/1281/A

#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(s[s.length()-1]=='u') {
            cout<<"JAPANESE"<<endl;
        }
        else if(s[s.length()-1]=='a'){
            cout<<"KOREAN"<<endl;
        }
        else {
            cout<<"FILIPINO"<<endl;
        }
    }
}
