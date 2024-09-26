#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
    string empname;
    int ID;
    int age;
    float salary;

    public:
    string getstatus(){
        if(age<=25){
            if(salary<=20000)return "low";
            else return "moderate";
        }
        else {
            if(salary<= 21000)return "low";
            else if(salary<=60000)return "moderate";
            else return "high";
        }
        return "a";
    }
    void showinfo(){
        cout<<empname<<endl;
        cout<<ID<<endl;
        cout<<age<<endl;
        cout<<salary<<endl;
        string status= getstatus();
        cout<<status<<"salaried person"<<endl;

    }
    void feedinfo(string empname,int ID,int salary){
        this->empname=empname;
        this->ID= ID;
        this->salary= salary;
    }
    ~employee(){};
};
int main(){
    
}