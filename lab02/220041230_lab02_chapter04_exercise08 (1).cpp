#include<bits/stdc++.h>
using namespace std;
struct british{
    int pounds;
    int shilling;
    int pence;
};
british separatecurrency(string &s){
    british currency;
    stringstream ss (s);
    char dot;
    ss>>dot>>currency.pounds>>dot>>currency.shilling>>dot>>currency.pence;
    return currency;
}
british sum(british val1, british val2){
    british results;
    results.pence= val1.pence+val2.pence;
    results.shilling=val1.shilling+val2.shilling+results.pence/12;
    results.pence=results.pence%12;
    results.pounds=val1.pounds+val2.pounds+results.shilling/20;
    results.shilling= results.shilling%20;
    return results;
}


int main(){
    string s1, s2;
    char x;
   do{

   cout<<"enter first amount: ";
   cin>>s1;
   cout<<"enter second amount: ";
   cin>>s2;
   british v1= separatecurrency(s1);
   british v2= separatecurrency(s2);
   british total= sum(v1, v2);
   cout<<total.pounds<<"."<<total.shilling<<"."<<total.pence<<endl;
   cout<<"do you want to continue?"<<endl;
   cin>>x;
   }while(x=='Y');
   
   

   



   
}