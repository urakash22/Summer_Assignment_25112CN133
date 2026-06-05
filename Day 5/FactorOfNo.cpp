// A Factor of number is the number that divides exactly it exactly (remainder = 0)
// For n = 12 : Factors are 1,2,3,4,6,12
// *** APROACH ***
// input n
// Loop from 1 to n
// if n%i == 0, then i is faactor 
// print i

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}