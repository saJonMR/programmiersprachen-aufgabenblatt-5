#ifndef MAT2_HPP
#define MAT2_HPP
#include <array>

struct Mat2 {
    // Matrix layout:
    //  e_00    e_10
    //  e_01    e_11

    float e_00 = 1.0f;
    float e_10 = 0.0f;
    float e_01 = 0.0f;
    float e_11 = 1.0f;

    //TODO (in mat2.cpp) Definition v. operator *=
    Mat2& operator*=(Mat2 const& m);

    float det() const;

};

//TODO (in mat2.cpp) Definition v. operator *
Mat2 operator*(Mat2 const& m1, Mat2 const& m2);

//Inverse berechnen und Transponieren
Mat2 inverse(Mat2 const& m);
Mat2 transpose(Mat2 const% m);
Mat2 make_rotation_mat2(float phi);

#endif //MAT2_HPP