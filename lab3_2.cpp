
#include<iostream>
using namespace std;
string encode(string s, int j){
        int k=j;
     for(int i=k; i<s.size(); i=i+k+1){
          s[i]+=k;
     }
     return s;
}
int main(){
   string str;
   getline(cin,str);
   int n;
   cin>>n;
   cout<<encode(str,n);
   return 0;
}
