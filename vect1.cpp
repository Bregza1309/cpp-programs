#include<iostream>
#include<vector>
#include<string>

using namespace std;
enum{NUM = 5};
int main(){
    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    cout<<"Enter"<<NUM<<" book`s titles and ratings"<<endl;
    for(int i{0} ; i< NUM ; i++){
        cout<<"Enter title #"<<i+1<<": ";
        getline(cin,titles[i]);
        cout<<"Enter your rating (0 - 10) :";
        cin>>ratings[i];
        cin.get();
    }
    cout<<"Thank you entered the following :\n"
        <<"Rating\tBook\n";
    for(int i{} ; i < NUM ; i++ ){
        cout<<ratings[i] <<"\t"<<titles[i] << endl;
    }
}