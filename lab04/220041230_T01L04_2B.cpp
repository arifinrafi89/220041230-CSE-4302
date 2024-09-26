#include<bits/stdc++.h>
using namespace std;
const float pi = 3.14159;

class trigonometric_values {
    private:
    float angle;
    float sine;
    float cosine;
    float tangent;
    float arcSine;
    float arcCosine;
    float arcTangent;

    public:
    trigonometric_values(float Angle){
        angle= Angle;
        
    }
    trigonometric_values(){
        angle= 0;
        
    }

    float calculateSin(){
        float val= sin(pi*angle/180);
        sine= val;
        return val;
    }
    float calculateCosine(){
        float val= cos(pi*angle/180);
        cosine= val;
        return val;
    }
    float calculateTangent(){
        int a= static_cast<int>(angle);

        if(a%180==90){
            cout<<"tangent is undefined"<<endl;
            return -1;
        }
        float val= tan(pi*angle/180);
        tangent= val;
        return val;
    }
    float calculateArcSine(){
        float val= 1/sin(pi*angle/180);
        arcSine= val;
        return val;
    }
    float calculateArcCosine(){
        float val= 1/cos(pi*angle/180);
        arcCosine= val;
        return val;
    }
    float calculateArcTangent(){
        float val= 1/tan(pi*angle/180);
        arcTangent= val;
        return val;
    }
    void calculateforAngle(float paraAngle){
        cout<<sin(pi*paraAngle/180)<<endl;
        cout<<cos(pi*paraAngle/180)<<endl;
        cout<<tan(pi*paraAngle/180)<<endl;
        return;
    }
    void clear(){
        angle= 0;
        sine=0;
        cosine=0;
        tangent=0;
        arcSine=0;
        arcCosine=0;
        arcTangent=0;
    }
    void dispaly(){
        cout<<"sine :"<<sine<<endl;
        cout<<"cosine :"<<cosine<<endl;
        cout<<"tangent :"<<tangent<<endl;
        cout<<"inverse sine :"<<arcSine<<endl;
        cout<<"inverse cosine :"<<arcCosine<<endl;
        cout<<"inverse tangent :"<<arcTangent<<endl;

    }
     ~trigonometric_values(){
         cout<<"destructor of the object is called"<<endl;
     }



};
int main(){
    trigonometric_values t1(60);
    t1.calculateSin();
    t1.calculateCosine();
    t1.calculateTangent();
    t1.calculateArcSine();
    t1.calculateArcCosine();
    t1.calculateArcTangent();
    t1.dispaly();
    


}