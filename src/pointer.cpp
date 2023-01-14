// pointers one
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;
    int * p_updates = &updates;
 // show values in two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
//  show addresses in two ways
    cout << "Addresses: &pdates = " << &updates;
    cout << ",  p_upddates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
   return 0;

}