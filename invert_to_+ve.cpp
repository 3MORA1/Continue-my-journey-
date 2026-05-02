#include<iomanip>
#include<iostream>
#include<cmath>                                  
#include<string>
using namespace std;

void input(int arr[],int n){
for(int i=0;i<n;i++){
cin>>arr[i];


}
}
void invert(int arr[],int n){
for(int i=0;i<n;i++){

    if(arr[i]<0){
        arr[i]*=-1;
    }
}



}

void diplay(int arr[],int n){
cout<<"Array after change: "<<endl;
for(int i=0;i<n;i++){

    cout<<arr[i]<<endl;
}


}

int main(){int arr[20],n;
cout<<"Enter total no. of elements (1-20) : ";cin>>n;
cout<<"Enter the numbers: ";
input(arr,n);
invert(arr,n);
diplay(arr,n);


system("pause");
    return 0;
}



