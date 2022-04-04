#pragma once

#include <iostream>
#include <system_error>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

namespace zich {

    class Matrix {
    public:
        size_t row;
        size_t col;
        vector<double> mat;

        Matrix(vector<double> vec=vector<double>{}, size_t rows=0, size_t cols=0):
            mat(vec), row(rows), col(cols)                  {    }

        Matrix& operator+=(const Matrix& other) {
            return *this; // for call chaining
        }


        Matrix& operator-=(const Matrix& other) {
            return *this;
        }

        Matrix& operator*=(const Matrix& other) {
            return *this;
        }
        Matrix& operator*=(const double num) {
            return *this;
        }

        Matrix operator-() const {
            return Matrix();
        }

        Matrix operator* (int d) {
            Matrix copy = *this;

            return copy;
        }

        Matrix operator++(int d) {
            return *this;
        }

        Matrix& operator++() {
            return *this;
        }

        friend Matrix operator- (const Matrix& c1, const Matrix& c2);

        friend Matrix operator+ (const Matrix& c1, const Matrix& c2);

        friend Matrix operator* (const Matrix& c1, const Matrix& c2);

        friend Matrix operator* (int c1, const Matrix& c2);

        friend bool operator==(const Matrix& c1, const Matrix& c2);

        friend ostream& operator<< (ostream& os, const Matrix& m);

        friend std::istream& operator>> (std::istream& input , Matrix& m);

    };
}