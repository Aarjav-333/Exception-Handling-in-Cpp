#include <iostream>
using namespace std;
int main(){
    try{
            int divisor, divident;
            cout<<"Enter the divident and divisor";
            cin>>divident>>divisor;
            if(divident==0)
            {
                throw runtime_error("Divident shouldn't be zero");
            }
            cout<<"Division Result : "<<divident/divisor<<endl;
    }
            catch(const runtime_error& a)
            {
                cout<<"Error, "<<a.what()<<endl;
            }
            return 0;
    }
    
