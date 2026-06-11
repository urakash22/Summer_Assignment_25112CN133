#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum ;
    sum = a + b;
    return sum;
}
int main(){
    int a,b;

    cout<<"Enter the  number a and b : ";
    cin>>a>>b;

    int j = sum(a,b);

    cout<<j;
    return 0;


    
}
