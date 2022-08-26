/* Name: Inderdeep Singh Sidhu
   Roll No: 2010991269
   Set No: 03
   Ques No: 1
 */


#include<iostream>
#include<algorithm>
using namespace std;

void swapAlt(int *arr,int n){
    for(int i=1;i<n;i+=2){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]<arr[i+1] && i<n-1){
            swap(arr[i],arr[i+1]);
        }
    }
}

void print(int *arr,int n){
    cout<<"\nArray: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n\n";
}

int main(){
    int n;
    cout<<" Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<" Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlt(arr,n);
    print(arr,n);

    return 0;

}