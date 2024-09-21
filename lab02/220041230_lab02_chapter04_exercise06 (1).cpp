#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num==1)return 1;
    return num*fact(num-1);
}

int main(){
    while(true){
        int a, res;
   cout<<"Enter a number"<<endl;
   cin>>a;
   if(a==0)return 0;
   else res=  fact(a);
   cout<<res<<endl;
   }

   
}