//Next permutations 


#include <iostream>
#include <climits>
using namespace std;
void reverse (int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[] = {3,2,1};
    int size = sizeof(arr)/sizeof(int);
    int num;
    int numi;
    int index;
    int k = INT_MAX;
    int end = size-1;
    int ki;
    bool found = false;
    for(int i = size-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            num = arr[i];
            numi = i;
            index= i+1;
            found = true;
            break;
        }
    }
    if (found){
    for(int i = index ; i<size;i++){
        if (k>arr[i]&&arr[i]>num){
            k = arr[i];
            k = min(k,arr[i]);
            ki = i;
         }
    }
    swap(arr[numi],arr[ki]);
    reverse(arr,index, end);
    cout<<"Next permutation is: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }}
    else{
        int start = 0;
        reverse(arr,start,end);
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}