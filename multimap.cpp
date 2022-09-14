#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

typedef int Keytype;
typedef pair<const Keytype,string> Pair;
typedef multimap<Keytype,string> MapCode;

int main(){
    MapCode codes;

    codes.insert(Pair(415,"San Francisco"));
    codes.insert(Pair(510,"Oakland"));
    codes.insert(Pair(718,"Brooklyn"));
    codes.insert(Pair(718,"Staten Island"));
    codes.insert(Pair(415,"San Rafael"));
    codes.insert(Pair(510,"Berkeley"));

    cout << "Number of cities with area code 415: "<< codes.count(415) << endl;
    cout << "Number of cities with area code 718: "<< codes.count(718) << endl;
    cout << "Number of cities with area code 510: "<< codes.count(510) << endl;
    cout << "Area Code\tCity\n";

    for(auto it :codes){
        cout<<(it.first)<<"\t\t"
            <<it.second<<endl;
    }
    pair<MapCode::iterator,MapCode::iterator> range{codes.equal_range(718)};
    cout<<"Cities with area code 718 :\n";
    for(auto it = range.first ; it != range.second;it++){
        cout<<(*it).second <<endl;
    }


}