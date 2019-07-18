#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int sum(int a, const int b){
    int c = a + b;
    ++a;
//    ++b;
    return c;
}

float sum(const vector<float> v) {
        cout << "sum(const vector<float>)" << endl;
            return accumulate(v.begin(), v.end(), 0.0f);
}
int sum(const int& a, int& b) {
        cout << "sum(const int&, int&)" << endl;
            const int c = a + b;
                ++b; // Will modify caller variable
                    // ++a; // Not allowed, but would also modify caller variable
                         return c;
                         }
                    
