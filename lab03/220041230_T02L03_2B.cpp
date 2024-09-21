#include<bits/stdc++.h>
using namespace std;
class RationalNumber{

    private:
    int numerator;
    int denominator;
    public:
    void assign(int p, int q){
        numerator=p;
        denominator=q;
        if(denominator==0){
            cout<<"You can not set 0 as denominator"<<endl;
            return;
        }
        

    }
    void convert(){
        if(denominator==0)return;
        double val = static_cast<double>(numerator)/denominator;
        cout<<val<<endl;
    }
    void invert(){
        if(numerator==0){
            cout<<"You can not set 0 as denominator. Inversion Failed"<<endl;
            return;
        }
        double val = static_cast<double>(denominator)/numerator;
        cout<<val<<endl;
        return;
    }
    void printInfo(){
        if(denominator==0){
            cout<<"Rational Number does not exist"<<endl;
            return;
        }
        int gcd= __gcd(numerator, denominator);
        int top= numerator/gcd, bottom= denominator/gcd;
        if(numerator==0){
            cout<<"the rational number is 0"<<endl;        
            }
        cout<<"the rational number is "<<top<<"/"<<bottom<<endl;
        return;

        
    }


};
int main(){
    RationalNumber R1;
    int numerator, denominator;
    cout<<"enter numerator and denominator :"<<endl;
    cin>>numerator>>denominator;
    R1.assign(numerator, denominator);
    R1.convert();
    R1.invert();
    R1.printInfo();


}
