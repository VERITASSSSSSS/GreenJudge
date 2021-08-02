#include<iostream>
using namespace std;

//int main(){
//    int n,sum=0;
//
//    cin>>n;
//    for(int i=1;i<=n.length();++i){
//        sum+=i;
//    }
//    cout<<sum;
//    }


int main(){
    int n, s=0;
    cin>>n;
    while(n>0){
    s+=n%10;
    n/=10;}
    cout<<s;
}
