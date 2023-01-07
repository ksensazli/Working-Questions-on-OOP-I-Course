#include "Matrix.h"

Matrix::Matrix() {
    a.resize(2, vector<int>(2));
}

Matrix Matrix::operator+(const Matrix &other) {
    Matrix res;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res.a[i][j] = a[i][j] + other.a[i][j];
        }
    }
    return res;
}

Matrix Matrix::operator*(int scalar) {
    Matrix res;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res.a[i][j] = a[i][j] * scalar;
        }
    }
    return res;
}

Matrix operator-(Matrix &m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            m.a[i][j] = -m.a[i][j];
        }
    }
    return m;
}

Matrix operator!(Matrix &m) {
    Matrix res;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res.a[i][j] = m.a[j][i];
        }
    }
    return res;
}

istream &operator>>(istream &in, Matrix &m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            in >> m.a[i][j];
        }
    }
    return in;
}

ostream &operator<<(ostream &out, const Matrix &m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            out << m.a[i][j] << " ";
        }
        out << endl;
    }
    return out;
}
