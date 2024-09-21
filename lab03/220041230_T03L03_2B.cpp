#include<bits/stdc++.h>
using namespace std;

class Medicine{
    private:
    char trade_name[100];
    char generic_name[100];
    double unit_price;
    double discountPercent=5;
    int sales;
    double sellingprice;
    public:
    void assignName(char name[], char generalName[]){
        strcpy(trade_name, name);
        strcpy(generic_name, generalName);
        return;
    }
    void assignPrice(double value){
        unit_price= value;
        return;
    }
    void setDiscountPercent(double percent){
        
        int val= static_cast<int>(percent);
        if(val>29||val<0){
            cout<<"Invalid Discount"<<endl;
            return;
        }
        discountPercent= percent;
        

    }
    void getsellingprice(int nos=1){
        sales= nos;
        double profit= static_cast<double>(sales)*(unit_price-(unit_price)*(discountPercent/100));
        cout<<"Total sales :"<<profit<<"bdt"<<endl;
    }
    void display(){
        sellingprice= unit_price-unit_price*(discountPercent/100);
        cout<<"MRP. of "<<trade_name<<"("<<generic_name<<")"<<"is bdt "<<unit_price<<". current discount "<<discountPercent<<"%. Selling price bdt "<<sellingprice<<"."<<endl;
    }


};
int main(){
    Medicine medicine1;
    char name[100], genericName[100];
    double price, discount;
    int number_of_sales;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter genericName :";
    cin>>genericName;
    medicine1.assignName(name, genericName);

    cout<<"enter price: ";
    cin>>price;
    medicine1.assignPrice(price);
    cout<<"set discount percent :";
    cin>>discount;
    medicine1.setDiscountPercent(discount);
    cout<<"enter number of sales :";
    cin>>number_of_sales;
    medicine1.getsellingprice(number_of_sales);
    medicine1.display();

    
}