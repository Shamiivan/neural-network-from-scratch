#include <iostream>
#include "Matrix.h"
#include <vector>
using std::ostream;
using std::cout;
using std::endl;
using std::vector;

using std::cout; 
using std::endl;
int main(int argc, char const *argv[])
{
    vector<vector<double>> data= {{1,2,3.5},{4,5.5,6},{7,8,9}};     
    vector<vector<double>> data2= {{1,2,3.5},{4,5.5,6},{7,8,9}};    
    Matrix m(data);
    Matrix m2(data2);
    Matrix m3 = m + m2;
    
    cout << m3 << endl;
    return 0;
}
