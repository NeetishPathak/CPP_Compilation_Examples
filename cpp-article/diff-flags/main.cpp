#include <iostream>
#include "Counters.hpp"
#include "increment1.hpp"
#include "increment2.hpp"
using namespace std;
int main(){
    Counters c;
    increment1(c); // 3 times
    increment1(c);
    increment1(c);
    increment2(c); // 4 times
    increment2(c);
    increment2(c);
    increment2(c);
    cout << "c.get1() " << c.get1() << endl;
    cout << "c.get2() " << c.get2() << endl;
    #ifndef NDEBUG 
    cout << "c.getAllCounters() " << c.getAllCounters() << endl;
    #endif
    return 0;
}
