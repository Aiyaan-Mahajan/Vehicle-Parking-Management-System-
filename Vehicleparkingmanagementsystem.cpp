#include<iostream>
using namespace std;
int main(){
int user_input;
int amount=0;
int count =0;
while(true){//we will be using this true
cout<<"\n";
cout<<"Vehicle Parking Management System : ";
cout<<"\n";
cout<<"Enter the number accordingly to park the listed vehicles :"<<endl;
cout<<"\n";
cout<<"Press 1: For Autorickshaw : "<<endl;
cout<<"Press 2: For Car : "<<endl;
cout<<"Press 3: For Bus : "<<endl;
cout<<"Press 4: To show record : "<<endl;
cout<<"Press 5: To delete record : "<<endl;
cin>>user_input;


if(user_input ==1){
    amount += 100;
    count += 1;
}
else if(user_input ==2){
    amount += 200;
    count += 1;
}
else if(user_input ==3){
    amount += 300;
    count += 1;
}
else if(user_input ==4){
   cout<<"Total amount is :"<<amount<<endl;   //show record
   cout<<"Total vehicles parked :"<<count<<endl;
}
else if(user_input ==5){
    amount = 0;//delete record 
    count = 0;
}
else{
    cout<<"Enter a valid input";
}

}
}