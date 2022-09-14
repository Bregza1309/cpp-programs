#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    string mercs[3]{"c63","a45","g63"};
    string bms[2]{"x6","m4"};
    string lambos[]{"aventador"};

    vector<string> mycars(1);
    copy(lambos,lambos+1,mycars.begin());
    // anonymous back insert mercs into my cars
    copy(mercs,mercs+3,back_insert_iterator<vector<string> >(mycars));
    //anonymous ostream for output
    copy(mycars.begin(),mycars.end(),ostream_iterator<string,char>(cout," "));
    cout<<endl;
    //anonymous front insert bms into mycars;
    copy(bms,bms+2,insert_iterator<vector<string> >(mycars,mycars.begin()));
    //output using ostream_iterator
    copy(mycars.begin(),mycars.end(),ostream_iterator<string,char>(cout," "));

}