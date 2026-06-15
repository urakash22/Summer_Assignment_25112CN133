#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0; 
    int end = n-1;

    while(start<= end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int even[5] {2,3,5,6,8};

reverse(even,5);

printArray(even,5);

return 0;
}





