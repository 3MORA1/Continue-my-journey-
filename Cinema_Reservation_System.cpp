#include<iomanip>
#include<iostream>
#include<cmath>                                  
#include<string>
using namespace std;
const int capacity=50;
struct hall{
string movie_name;
int n,seats;
};
int main(){
    hall h[3];  
    string movie;
 int numOfTickets,seat=0;
 for(int i=0;i<3;i++)
 {
 cout<<"Enter Hall Number: ";cin>>h[i].n;;
 cout<<"Enter movie: ";cin>>h[i].movie_name;
 h[i].seats=0;
}
cout<<"Enter your designated movie: ";cin>>movie;
cout<<"How many tickets? ";cin>>numOfTickets;
bool found=false;
for(int i=0;i<3;i++)
{
if(movie==h[i].movie_name&&h[i].seats+numOfTickets<=capacity){
  h[i].seats+=numOfTickets; 
    cout<<"Movie at Hall number: "<<h[i].n<<endl;
  cout<<"Number of empty seats : "<<capacity-h[i].seats<<endl;
found=true;
break; 
}}
if(!found){
    cout<<"Reservation cannot be made "<<endl;}
system("pause");
    return 0;
}
