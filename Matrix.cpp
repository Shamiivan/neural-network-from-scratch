#include "Matrix.h"

Matrix::Matrix(int n_rows, int n_cols){
    size = n_rows * n_cols;
    m_data= new double[size];
}

Matrix::Matrix(vector<vector<double>>& data){
    n_rows = data.size();
    n_cols = data[0].size();    
    size = n_rows * n_cols;
    m_data = new double[size];


    int index = 0;
    //flatten the array
    for(int i = 0; i < n_rows; i++){
        for(int j = 0; j < n_cols; j++){
            index = i * n_cols + j;
            m_data[index] = data[i][j];
        }
   }
}
Matrix::~Matrix(){
    delete []m_data;
}

int Matrix::get_size(){return size;}

double Matrix::operator()(int i, int j)const{
    int index = i*n_cols + j;
    return m_data[index];
}
double& Matrix::operator()(int i, int j){
    int index = i*n_cols + j;
    return m_data[index];
}; 
double& Matrix::operator[](int index){
    return m_data[index];
}
void Matrix::set_value(int i, int j, double val){
    int index = i*n_cols + j;
    m_data[index] = val;
}

//matrix operations
Matrix Matrix::operator+(Matrix& other){
    Matrix result(n_rows, n_cols);
    double sum;
    for(int i = 0; i<size; i++){
        sum = other[i] + m_data[i];
        result[i] = sum;
    }
    return result;
}; 
Matrix Matrix::operator-(Matrix &other){
    Matrix result(n_rows, n_cols);
    double diff;
    for(int i = 0; i<size; i++){
        diff = m_data[i] - other[i];
        result[i] = diff;
    }
    return result;
}
Matrix Matrix::operator*(double k){
    Matrix result(n_rows, n_cols);
    for(int i = 0; i<size; i++){
        result[i] = m_data[i] * k;
    }
    return result;
}
// Matrix* Matrix::operator*(Matrix*){}; /// multiplication operator
// Matrix* transpose(Matrix*){}; // transpose any matrix 
ostream& operator<<(ostream& os, Matrix* matrix){
    for(int i = 0; i < matrix->size; i++){
        os << matrix->m_data[i] << " ";
    }
    return os;
}
ostream& operator<<(ostream& os, Matrix &matrix){
    for(int i = 0; i < matrix.size; i++){
        os << matrix[i] << " ";
    }
    return os;
}