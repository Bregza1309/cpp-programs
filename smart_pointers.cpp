#include<iostream>
#include<cstring>
#include<memory>

using namespace std;

class Report{
    private:
        string str;
    public:
        Report(const string s):str(s){
            cout<<"Object Created!"<<endl;
        }
        ~Report(){cout<<"Object deleted!"<<endl;}
        void comment() const{cout<<str<<endl;}
};

int main(){
    shared_ptr<Report> ps(new Report("Using shared_ptr"));
    ps->comment();

    unique_ptr<Report> js (new Report("Using unique_ptr"));
    js->comment();
}