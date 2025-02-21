#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 5, 8 ,9 ,2 ,5, 2 ,6 ,2 ,3, 2};
    int size=11;
    int count=0;
    int key;
    cout<<"Enter counting element is: "<<endl;
    cin>>key;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<count;
return 0;
}