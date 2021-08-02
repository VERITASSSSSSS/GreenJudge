#include<iostream>
using namespace std;

int main(){
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        cout<<i;
        if(i>0){
        sum+=i;
        cout<<"+";}
    }

    cout<<"="<<sum;
    }


