//merge two sorted arrays

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr1[] = {1,5,6};
    int arr2[] = {2,3,4};
    vector <int> merge;
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int j = 0;int i = 0;

    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            merge.push_back(arr1[i]);
            i++;
        }
        else{
            merge.push_back(arr2[j]);
            j++;
        }
    }

    while(j<size2){
        merge.push_back(arr2[j]);
        j++;
    }
    while(i<size1){
        merge.push_back(arr1[i]);
        i++;
    }

    for(int i = 0;i<merge.size();i++){
        cout<<merge[i]<<" ";
    }

    return 0;
}