#include <iostream>
#include "Matrix.h"
#include <vector>
#include <cassert>
#define assertm(exp, msg) assert(((void)msg, exp));

using std::ostream;
using std::cout;
using std::endl;
using std::vector;
using std::abort;
using std::cout; 
using std::endl;

int main(int argc, char const *argv[])
{
    vector<vector<double>> data= {{1,2,3.5},{4.433,5.5,6.4},{7,48,9}};     
    vector<vector<double>> data2= {{1,5,3.5},{45,5.55,6},{744,8,59}};    
    Matrix m1(data);
    Matrix m2(data2);
    Matrix m3 = m1 + m2;
    
    //test additon 
    assert(m1.get_size() == m3.get_size());
    assert(m3[3] == m1[3]+m2[3]);
    cout << "test additon passed" << endl;

    //test substraction
    Matrix m4 = m1 - m2;
    assert(m1.get_size() == m3.get_size());
    assert(m4[3] == m1[3]-m2[3]);
    cout << "test substraction passed" << endl;

    //test scalar_muliplication
    Matrix m5 = m1 *5;
    assert(m1.get_size() == m3.get_size());
    assert(m5[5] == m1[5]*5);
    cout << "test scalar_muliplication passed" << endl;
    return 0;
}
