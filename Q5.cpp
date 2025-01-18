#include<iostream>
using namespace std;
int main(){
    int num,target;
    cout<<"Enter the number of elements in array:";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements:";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"Enter a targeted value:";
    cin>>target;

    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){

if(target==arr[i]+arr[j]){
    cout<<"indices are:"<<i<<","<<j;
}

        }
    }

}