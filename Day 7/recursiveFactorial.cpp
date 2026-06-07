#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    else
    return (n*fact(n-1));
}
    int main()
    {
        int n;
        cout<<"Enter the number : ";
        cin>>n;

        int factorial = fact(n);

        cout<<"The factorial of number is "<<factorial<<endl;

        return 0;
    }
    
