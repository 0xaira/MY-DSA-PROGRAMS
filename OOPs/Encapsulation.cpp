#include<iostream>
using namespace std;
 
class demo {
    private:
        //private member hidden from outside world
        int var;
         
    public:
        //to set the value of var
        void set_var(int temp)
        {
            var =temp;
        }
         
        //to get the value of var
        int get_var()
        {
            return var;
        }
};
 
// main function
int main() {
    //creating object of demo class
    demo obj;
     
    //using set_var function to set the value 100 to private member var
    obj.set_var(100);
     
    //using get_var function to get/access the value of private member var
    cout<<obj.get_var();
   
    return 0;
}