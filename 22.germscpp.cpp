#include<iostream>
using namespace std;

int main(){
    int n,m,count;
    count = 0;
    cin>>n>>m;
    while(n < m){
        count+=1;
        n*=3;
    }
    cout<<count;
    }

