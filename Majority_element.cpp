//Majority element in array

#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,2,3,2,2,5};
    int size = sizeof(arr)/sizeof(int);
    int candidate = 0;
    int count = 0;
    for(int i = 0;i<size;i++){
        if (count == 0){
            candidate = arr[i];
        }
        if(candidate == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for(int j = 0;j<size;j++){
        if(arr[j]==candidate){
            count++;
        }
        if(count>size/2){
            cout<<"Maximum: "<<candidate<<endl;
            cout<<"count: "<<count;
            break;
        }
    }
    
   
return 0;
}