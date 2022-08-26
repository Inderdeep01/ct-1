/* Name: Inderdeep Singh Sidhu
   Roll No: 2010991269
   Set No: 03
   Ques No: 2
 */


#include<iostream>
using namespace std;

void findPair(int *arr,int n,int sum){
    int found = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
                found = 1;
            }
        }
    }
    if(!found){
        cout<<"Pair not found"<<endl;
    }
}

int main(){
    int n,sum;
    cout<<" Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<" Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter sum: ";
    cin>>sum;

    findPair(arr,n,sum);

    return 0;
}