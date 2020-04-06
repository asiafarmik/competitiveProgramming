//https://codeforces.com/problemset/problem/1097/A
#include<iostream>
using namespace std;

int main() {
    string s,temp;
    cin>>s;
    int found=0;
    for(int i=0; i<5; i++){
        cin>>temp;
        if(s[0]==temp[0]||s[1]==temp[1]){
            found =1;
            
        }
        
    }
    if(found){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}
