#include "Matrix.hpp"
#include <iostream>

using namespace std;


namespace zich {
    ostream &operator<<(ostream &os, const Matrix &m) {
        string ans = "[";
        for (size_t i = 0; i < m.mat.size(); i++) {
            //if we arrived to the end of the row:
            if (i % m.col == 0 && i != 0) {
                ans += "]\n[";
            }
            //checking if the number is integer number
            if (floor(m.mat[i]) == m.mat[i]) {
                ans += to_string(int(m.mat[i]));
            } else {
                ans += to_string(m.mat[i]);
            }
            //adding spaces between the numbers
            if ((i + 1) % m.col != 0) {
                ans += " ";
            }
        }
        ans += "]\n";
        std::operator<<(os, ans);
        return os;
    }
    std::istream& operator>> (std::istream& input , Matrix& m){
        return input;
    }

    Matrix operator-(const Matrix &c1, const Matrix &c2) {
        return Matrix();
    }

    Matrix operator+(const Matrix &c1, const Matrix &c2) {
        return Matrix();
    }

    Matrix operator*(int c1, const Matrix &c2) {
        return Matrix();
    }

    Matrix operator* (const Matrix& c1, const Matrix& c2){
        return Matrix();
    }

    bool operator==(const Matrix& c1, const Matrix& c2){
        return true;
    }

}

