#include<iomanip>
#include<iostream>
#include<cmath>                                  
#include<string>
using namespace std;
struct stud{
int id,grade;
string Firstname;

};
stud student[4];

void input(){
    
for(int i=0;i<4;i++){
cout<<"Enter Student "<<i+1<<" ID: ";cin>>student[i].id;
cout<<"Enter Student "<<i+1<<" FirstName: ";cin>>student[i].Firstname;
cout<<"Enter Student "<<i+1<<" Grade: ";cin>>student[i].grade;
cout<<endl;
}}
void status(){
for(int i=0;i<4;i++){
if(student[i].grade>60){
cout<<"Student "<<student[i].Firstname<<" status is : P"<<endl;
}else 
{
    cout<<"Student "<<student[i].Firstname<<" status is : F"<<endl;
}
}
}
int main(){
input();
status();

system("pause");
    return 0;
}
