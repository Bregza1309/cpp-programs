#include<iostream>

using namespace std;

class Linear{
    private:
        double gradient;
        double y_int;
    public:
        Linear(double slp = 1 , double y0 = 0):gradient(slp),y_int(y0){}
        double operator()(double x){return y_int + gradient* x;}

};

int main(){
    Linear f1;
    Linear f2(2.5,10);
    cout<< f2(1)<<endl;
}