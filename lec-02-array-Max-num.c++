#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1, 5, 8 ,9 ,2 ,5, 2 ,6 ,2 ,3, 2};
    int size=11;
    int maximumNum=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maximumNum){
            maximumNum=arr[i];
        }
    }
    cout<<"maximum number is: "<<maximumNum;
return 0;
}