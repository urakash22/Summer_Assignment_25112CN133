#include<iostream>
using namespace std;
int main(){
    int n, temp, rev = 0;
    

    cout<<"Enter the number";
    cin>>n;
    temp = n;

    while (n>0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
        
    }
    if (temp == rev)
    {
        cout<<"palindrome number";
    }
    else{
        cout<<"not palindrom number";
    }
    return 0;
    
    
}
