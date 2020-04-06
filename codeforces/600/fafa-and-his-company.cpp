//https://c...content-available-to-author-only...s.com/problemset/problem/935/A
#include<iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int temp=0;
    for(int i=1;i<num-1;i++){
        if(num%i==0){
            temp++;
        }
        
    }
    cout<<temp;
    
    
}
