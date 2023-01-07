#ifndef WORKING_Q1_MATRIX_H
#define WORKING_Q1_MATRIX_H


#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> a;

public:
    Matrix();

    Matrix operator+(const Matrix& other);

    Matrix operator*(int scalar);

    friend Matrix operator-(Matrix& m);

    friend Matrix operator!(Matrix& m);

    friend istream& operator>>(istream& in, Matrix& m);

    friend ostream& operator<<(ostream& out, const Matrix& m);
};


#endif //WORKING_Q1_MATRIX_H
