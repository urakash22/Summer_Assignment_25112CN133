#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
cout<<"Enter the number : ";
cin>>n;

cout<<"Enter the array " ;
for(int i = 0; i<=n; i++){
    cin>>arr[i];
}

for(int i = 0; i<n; i++){
    cout<<arr[i];
}

return 0;
}