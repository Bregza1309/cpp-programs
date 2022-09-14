#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
    //ostream iterator for output
    ostream_iterator<int,char>output(cout," ");
    list<int> one(5,2);
    int stuff[5] = {1,2,4,8,6};
    
    list<int>two;
    two.insert(two.begin(),stuff,stuff+5);

    int more[6]{6,4,2,4,6,5};
    list<int> three(two);
    three.insert(three.end(),more,more+6);

    cout<<"list one :";
    copy(one.begin(),one.end(),output);
    cout<<endl;
    cout<<"list two :";
    three.splice(three.begin(),one);
    three.sort();
    three.unique();
    copy(three.begin(),three.end(),output);
}