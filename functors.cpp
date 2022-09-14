#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;
//class defination of TooBig which determines if a function is too big
template<typename T>
class TooBig{
    private:
        T limit;
    public:
        TooBig(T lim = T()):limit(lim){}
        bool operator()(const T& v){return v > limit;}
};
//Output Iterator for showing integers
ostream_iterator<int,char>intOutput(cout," ");

int main(){
    TooBig<int> f100{100};

    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> l1(vals , vals+10);
    list<int> l2(vals , vals+10);

    cout<<"Original Lists :";
    copy(l1.begin(),l1.end(),intOutput);
    cout<<endl;
    copy(l2.begin(),l2.end(),intOutput);
    cout<<endl;

    //remove values that are bigger than 100 in L1 using romove_if
    l1.remove_if(f100);
    cout<<"L1 <= 100 :";
    copy(l1.begin(),l1.end(),intOutput);
    cout<<endl;

    cout<<"L2 <= 200 :";
    l2.remove_if(TooBig<int>(200));
    copy(l2.begin(),l2.end(),intOutput);
    cout<<endl;
}
