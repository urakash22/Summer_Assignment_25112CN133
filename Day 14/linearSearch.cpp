#include<iostream>
using namespace std;
bool Search(int arr[], int n, int key){
    for(int i = 0; i<=n; i++){
        if (key == arr[i])
        return 1;
      
    }
     
    return 0;
       
    
}
int main(){
    int arr[5] = {2,3,4,5,6};
    int key;
    cout<<"Enter the key ";
    cin>>key;

    int found = Search(arr,5,key);

    if(found){
        cout<<"key is present";

    }
    else{
        cout<<"key is not present";
    }

    return 0;
}