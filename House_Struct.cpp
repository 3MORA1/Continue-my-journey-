#include<iomanip>
#include<iostream>
#include<cmath>                                  
#include<string>
using namespace std;

#define MAX_ROOMS 10
#define METER_PRICE 200

struct room
{
double l,w;
};

struct house{
string address;
int numOfRooms;
room rooms[MAX_ROOMS];
float price,area=0;
};
int main(){
    house h={};
    cout<<"Address : ";cin>>h.address;
    
    cout<<"Number of rooms : ";cin>>h.numOfRooms;
    for(int i=0;i<h.numOfRooms;i++){
cout<<"Dimensions of room "<<i+1<<" : ";cin>>h.rooms[i].l>>h.rooms[i].w;
h.area+=(h.rooms[i].l)*(h.rooms[i].w);

    }
cout<<"The house is in "<<h.address<<". It has "<<h.numOfRooms<<" rooms,with a total area of "<<h.area<<" square meters."<<endl;
cout<<"It costs "<<"$"<<METER_PRICE*h.area<<endl;

system("pause");
    return 0;
}
