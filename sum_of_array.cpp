#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {2,3,2,4,5,4};
    int size= sizeof(arr)/sizeof(int);
    int sum = 0;
    
    for(int i = 0;i<size;i++){
        sum = sum + arr[i];
     }
     cout << "Sum is: "<<sum;
    return 0;
}