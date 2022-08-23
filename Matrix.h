#include <iostream>
#include <vector>
#include <cstddef>
using std::vector;
using std::cout;
using std::endl;
using std::ostream;

class Matrix{
    private:
        size_t n_rows; // number of rows
        size_t n_cols; // number of columns
        size_t size; //size of the one dimensional matrix
        double *m_data; //one dimensional representation of the 2d matrix
        
    public:
        Matrix(int n_rows, int n_cols); // Maybe not ideal
        Matrix(vector<vector<double>>& data); 
        Matrix(const Matrix&);
        ~Matrix();


        //accessing values 
        double operator()(int i, int j)const; // return the element at i,j
        double& operator()(int i, int j); // return
        double& operator[](int index); // Access values as one d array
        int get_size() const;
        

        //setting values
        void set_value(int i, int j, double val);
        //matrix operations
        Matrix operator+(Matrix&);
        Matrix* operator-(Matrix*);
        Matrix* operator*(Matrix*); // perform matrix multiplication
        Matrix* scalar_muliplication(double);
        friend Matrix* transpose(Matrix*); // transpose any matrix 
        friend ostream& operator<<(ostream&, Matrix*); 
        friend ostream& operator<<(ostream&, Matrix&); 
    
};