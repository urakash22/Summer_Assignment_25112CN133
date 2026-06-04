#include<iostream>
using namespace std;
int main(){
    int n,temp,s;
    cout<<"Enter the number : ";
    cin>>n;
    
    for(int i = 1; i<=n; i++){
        temp = i;
        s = 0;
         while(temp>0)
    {
        int d = temp%10;
         s = s + (d*d*d);
         temp = temp/10;
    }
    if (s == i){
        cout<<i<<" ";
    }

    }
   
       return 0;
}