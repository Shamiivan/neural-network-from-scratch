# neural-network-from-scratch
Implementation of a neural network in c++ from scratch

## Definition
    defined as 1d array
    formula to go from 2d to 1d viceversa
    index : 1d array
    i,j : 2d
    index = i * number of colums + j // Give i and j calculate i
    i = index/number of rows 
    j = index-i*number of rows

## Basic operations
- addition
- scalar multiplication
- matrix multiplication
- Linear transformation


## design decisions
implementing a double array is costly both in time and space
you have to loop through each individual row and allocate memory(Extra space) and with delallocation it still takes time

The best way to go about is to implement one dimensional array and use mathematical tricks to access the 2 dimensional array 


### TOdos;

- Implement linear algebra library 
    - [x] define the data structure of a Matrix(Matrix.h) 
    - [x] flatening a matrix
    - [] Matrix addition
    - [] Matrix substraction
    - [] scalar multiplication
    - [] Matrix multiplication

    - Linear transformation


## Questions
- Can we do a dot product on matrix? and why? or why not?
- Can a vector be more than 3 dimensional?