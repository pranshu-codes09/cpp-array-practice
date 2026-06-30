# include <iostream>
using namespace std;
int main (){
    int arr[] ={2,3,2,5,3,2};
    int size= sizeof(arr)/sizeof(int);
    bool printed[size] = {false};
   
    for(int i = 0;i<size;i++){
        if (printed[i]==true){
            continue;
        }
        int found = 0;
        for(int j = 0;j<size;j++){
            if(arr[i]==arr[j]){
                found++;
            printed[j] = true; 
            }
        }
        cout<<arr[i]<<":"<<found<<endl;
    }
    return 0;
}