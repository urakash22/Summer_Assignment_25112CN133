#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int a = 0;
    int b = 1;
    if (n == 0)
    cout<< a;
    else if(n == 1)
    cout<< b;
    else{
        for(int i = 2; i<=n; i++){
        int nextnum = a+b;
       // cout<<nextnum<<" "<<endl;
        a = b;
        b = nextnum;
    }
    cout<<"Nth Fibbonacci term : "<<b;
    }
    
    return 0;
}