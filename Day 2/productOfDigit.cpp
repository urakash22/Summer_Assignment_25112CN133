#include<iostream>
using namespace std;
int main(){
    int n,prod = 1;
    cout<<"Enter the number";
    cin>>n;

    while(n>0){
        int rem = n%10;
        prod *= rem;
        n = n/10;
    }
    cout<<prod;
    return 0;
}