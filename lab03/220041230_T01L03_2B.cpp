#include<bits/stdc++.h>
using namespace std;

class Counter{
private:
int IncrementInfo;
int Count=0;


public:
void IncreaseCount(){
    Count+=IncrementInfo;
}
void getCount(){
    cout<<Count<<endl;
}
void setIncrementInfo(int x){
    IncrementInfo= x;
}
void resetCount(){
    Count=0;
}
};
int main(){
    Counter count1;
    int n;
    cin>>n;
    count1.setIncrementInfo(n);
    count1.IncreaseCount();
    count1.IncreaseCount();
    count1.getCount();
    count1.resetCount();
    
}