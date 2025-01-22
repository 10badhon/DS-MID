#include<iostream>
using namespace std;

struct Student{
   int id;
   int credit;
   float cgpa;
};

int main(){
   Student s[10];
   
   cout<<"enter information for all student"<<endl;
   for(int i=0; i<10; i++){
    cout<<"Student "<<i+1<<endl;
    cout<<"id : ";
    cin>>s[i].id;
    cout<<"total credit : ";
    cin>>s[i].credit;
    cout<<"CGPA : ";
    cin>>s[i].cgpa;
   }
   
   cout<<"Printing all student who have cgpa more than 3.75 or complete 50 credits"<<endl;
   for(int i=0; i<10; i++){
       if(s[i].cgpa>3.75 || s[i].credit>50){
          cout<<" ID "<<s[i].id<<endl;
          cout<<" Credit completed "<<s[i].credit<<endl;
          cout<<" CGPA "<<s[i].cgpa<<endl;
          cout<<"---*---"<<endl;
       }
   }


}