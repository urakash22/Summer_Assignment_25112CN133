#include<iostream>
using namespace std;
void Zero(int arr[], int n){
    int nonzero = 0;
    for(int j = 0; j<n; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[nonzero]);
            nonzero++;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int even[6] = {0,1,0,3,12,0};

    Zero(even,6);

    printArray(even,6);

    return 0;

}