#include"emp.h"
#include<iostream>

using namespace std;

// abstract employee methods
//costructor
abstr_emp::abstr_emp(const std::string & fn , const std::string & ln,const std::string & j){
    fname = fn;
    lname = ln;
    job = j;
}


// friend method shows fname and lname
abstr_emp::ostream & operator<<(ostream & os,const abstr_emp& emp){
    os<<emp.fname<<","<<emp.lname<<endl;
    return os;
}

//employee class methods
employee::employee(const std::string & fn , const std::string & ln,const std::string & j):abstr_emp(fn,ln,j){}

employee::