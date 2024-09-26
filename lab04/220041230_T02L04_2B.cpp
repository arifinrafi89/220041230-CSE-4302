#include<bits/stdc++.h>
using namespace std;

class bankAccount{

    private:
    int account_number;
    string account_name;
    string account_type;
    float current_balance;
    float minimun_balance;
    float interest_rate=3;
    float interest;

    public:
    bankAccount(int account_number, string account_name, string account_type, float current_balance, float minimun_balance){
        this->account_number= account_number;
        this->account_name= account_name;
        this->account_type= account_type;
        this->current_balance= current_balance;
        this->minimun_balance= minimun_balance;
    }
    void setAccountNumber(int account_number){
        this->account_number= account_number;
    }
    void setAccountName(string account_name){
        this->account_name= account_name;
    }
    void setAccountType(string account_type){
        this->account_type= account_type;
    }
    void setcurrentBalance(float current_balance){
        this->current_balance= current_balance;
    }
    
    bankAccount(){}
    void showInfo(){
        cout<<account_number<<endl;
        cout<<"account name :"<<account_name<<endl;
        cout<<"account type :"<<account_type<<endl;
        cout<<"current balance :"<<current_balance<<endl;
        cout<<"minimum balance :"<<minimun_balance<<endl;

    }
    void showBalance(){
        cout<<"current balance :"<<current_balance<<endl;
    }
    void withdraw(float val){
        if(current_balance-val<minimun_balance){
            cout<<"withdrawal is not possible"<<endl;
            return;
        }
        current_balance-=val;
    }
    void deposit(float val){
        current_balance+=val;
    }
    void giveinterest(float interest_rate){
        this->interest_rate= interest_rate;
        interest= current_balance*(interest_rate/100);
        float incometax= interest/10;
        current_balance= current_balance+interest- incometax;
        cout<<"interest :"<<interest<<endl;
    }
    void giveinterest(){
        this->interest_rate= interest_rate;
        interest= current_balance*(interest_rate/100);
        float incometax= interest/10;
        current_balance= current_balance+interest- incometax;
        cout<<"interest :"<<interest<<endl;
    }
    ~bankAccount(){
         cout<<"account of "<<account_name<<" with account no "<<account_number<<"is destroyed with balance bdt "<<current_balance<<endl;
     }


};
int main(){
    bankAccount account1( 123 , "abc", "savings", 5000, 50);
    account1.deposit(50);
    
    //interest rate
    account1.giveinterest(10);
    account1.showInfo();
    account1.showBalance();

}