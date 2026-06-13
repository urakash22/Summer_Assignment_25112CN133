#include<iostream>
using namespace std;
int main(){
    int n,arr[100],sum = 0;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        sum += arr[i];

    }
    cout<<sum;
    return 0;

}