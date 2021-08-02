Correct 

#include<iostream>
using namespace std;

int main(){
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        cout<<i;
        sum+=i;
        if(i<b){
        cout<<"+";}
    }

    cout<<"="<<sum;
    }


**********************
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

********************

