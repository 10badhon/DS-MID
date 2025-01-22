#include<iostream>
using namespace std;

int main(){
     int m1[3][3],m2[3][3],m3[3][3],sum[3][3];
     
     cout<<"Input matrix 1 "<<endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>m1[i][j];
        }
     }

     cout<<"Input matrix 2 "<<endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>m2[i][j];
        }
     }

     cout<<"Input matrix 3 "<<endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>m3[i][j];
        }
     }

     cout<<"Addition of 3 matrix "<<endl;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j]=m1[i][j]+m2[i][j]+m3[i][j];
        }
     }

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
     }
     
     
}