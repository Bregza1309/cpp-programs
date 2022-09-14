#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main(){
    int nums[]{3,5,6,2,2,4,5};
    vector<int> nums_v(10);
    copy(nums,nums+7,nums_v.begin());
    ostream_iterator<int,char>output(cout , " ");
    copy(istream_iterator<int,char>(cin),istream_iterator<int,char>(),nums_v.begin());
    copy(nums_v.begin(),nums_v.end(),output);
}