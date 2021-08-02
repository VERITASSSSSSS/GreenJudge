#include<iostream>
using namespace std;

int main(){
    int n, rev=0,rem;
    cin>>n;
    while(n!=0){ //12345 //1234
    rem=n%10; //5 //4
    rev=rev*10+rem; //5 //54
    n/=10; //1234
    }
    cout<<rev;
    }


