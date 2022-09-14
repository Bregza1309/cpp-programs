#include "customer_service.h"

using namespace CST_SERVICE;
int main(){
    unique_ptr<VirtualLineSystem> mysystem(new VirtualLineSystem());
    mysystem->mainService();
    
}