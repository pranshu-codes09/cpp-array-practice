#include <iostream>
# include <climits>
using namespace std;

int main() {
    int arr[ ] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int low = INT_MAX;
    int high = INT_MIN;
    int low_index;
    int high_index;
    for (int i = 0;i<size;i++){
        if (arr[i]<low){
            low = arr[i];
            low_index = i;
        }
    }
    for (int i = 0;i<size;i++){
        if (arr[i]>high){
            high = arr[i];
            high_index = i;
        }
    }
    cout<<"low index is :"<<low_index<<endl;
    cout<<"high index is :"<<high_index<<endl;
    
    swap(arr[low_index],arr[high_index]);
    
    cout<<"After swapping:"<<endl;
    
    for (int i = 0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}