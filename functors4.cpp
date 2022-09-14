#include<iostream>
#include<vector>
#include<functional>
#include<iterator>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    // define an ostream_iterator for outputing int
    ostream_iterator<int,char> int_output(cout," ");

    //define a list and copy it into two vectors
    enum{SIZE = 5};
    int list[SIZE]{23,13,67,89,1};

    vector<int> v1(list,list + SIZE);
    vector<int> v2(SIZE);
    cout<<"Original array (v1): ";
    copy(v1.begin(),v1.end(),int_output);
    cout<<endl;
    //pow 2 each element in the v1 vector and store into v2
    transform(v1.begin(),v1.end(),v2.begin(),[](int x){return pow(x,2);});
    cout<<"v1 to the power of 2 (v2) : ";
    copy(v2.begin(),v2.end(),int_output);
    cout<<endl;
    //add v1 and v2
    cout<<"v1 plus by v2 element wise :";
    transform(v1.begin(),v1.end(),v2.begin(),int_output,plus<int>());
    
}