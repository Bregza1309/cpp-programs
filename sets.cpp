#include<iostream>
#include<iterator>
#include<set>
#include<algorithm>

using namespace std;
int main(){
    enum{N = 6};
    string s1[N]{"buffoon","thinkers","for","heavy","can","for"};
    set<string> A(s1,s1+N);//initialize set using a range from the array
    ostream_iterator<string,char> output(cout," ");
    copy(A.begin(),A.end(),output);
}