#ifndef CUSTOMER_SERVICE_H_
#define CUSTOMER_SERVICE_H_

#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>
#include<memory>


namespace CST_SERVICE{
    using namespace std;
    //declaration of Virtual LineSystem object
    struct VirtualLineSystem{
        private:
            //doubly linked-list to store customer names
            list<string> customers;
            string tmp_name ;
            int userChoice;
        public:
            //public methods
            void addCustomer();
            void callCustomer();
            void mainService();
    };

    //defination of class methods
    //addCustomer
    void VirtualLineSystem::addCustomer(){
        cout<<"Enter Customer Name : ";
        cin>>tmp_name;
        customers.insert(customers.end(),tmp_name);
    }

    //callCustomer
    void VirtualLineSystem::callCustomer(){
        if(customers.empty()){
            cout<<"Currently no customers in the empty !!"<<endl;
        }
        else{
            cout<<"Currently serving Customer : "<<customers.front()<<endl;
            customers.pop_front();
            cout<<"Next!!!!!!"<<endl;
        }
    }
    //main service 
    void VirtualLineSystem::mainService(){
        cout<<"***************Welcome to Virtual line system**************"<<endl;
        cout<<"\t\t1. Call a Customer\n"
            <<"\t\t2. Add a Customer\n"
            <<"\t\t3. Quit\n";
        while(cin>>userChoice && userChoice < 3){
            switch(userChoice){
            case 1 :{
                callCustomer();
                break;
            }
            case 2:{
                addCustomer();
                break;
            }
            
        }
        cout<<"Done!!!!!!"<<endl;
        
        }
    }

};
#endif