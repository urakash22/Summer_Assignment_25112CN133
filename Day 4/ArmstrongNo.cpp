#include<iostream>
using namespace std;
int main(){
    int n,temp,s = 0;;
    cout<<"Enter the number : ";
    cin>>n;
    temp = n;
    while(n!=0)
    {
        int d = n%10;
         s = s + (d*d*d);
         n = n/10;
    }

    if(temp == s){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }
    
    return 0;

}