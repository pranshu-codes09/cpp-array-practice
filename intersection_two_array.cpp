#include <iostream>
using namespace std;

int main() {
    
    int arr1[] = {23,2,3,4,5,4,7};
    int arr2[]= {2,3,5,6,8,9};
    
    int size1= sizeof(arr1)/sizeof(int);
    int size2= sizeof(arr2)/sizeof(int);
    
    
    for(int i = 0;i<size1;i++){
        int count = 0
        for(int j = 0;j<size2;j++){
            if (arr1[i]==arr2[j]){
                count++;
            }
        }
        if (count == 1){
            cout<<arr1[i]<<endl;
        }
     }
    return 0;
}