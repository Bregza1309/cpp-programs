#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
//Apply iterator to output double values
ostream_iterator<double,char> d_output(cout," ");

int main(){
    enum{size = 5};
    double nums[size]{36, 39, 42, 45, 48};
    vector<double> v_nums(nums,nums+size);
    cout<<"Original array : ";
    copy(v_nums.begin(),v_nums.end(),d_output);
    cout<<endl;
    //apply the functor transform 
    //to calculate the sqrt of each element in the vector
    vector<double> sqrt_nums(nums,nums+size);
    transform(v_nums.begin(),v_nums.end(),d_output,[](double x){return sqrt(x);});
    
}