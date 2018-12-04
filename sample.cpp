#include <iostream>
#include "vec_op.hpp"

using namespace std;

int main() {
    srand((unsigned) time(NULL));

    vector<double> v1 = {1, 2.5, 5.6, 3.1, 8};
    vector<double> v2 = {4.9, 3, 1.5, 2, 1.7};
    double c = 1.4;
    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    cout << "c = " << c << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "+v1 = " << +v1 << endl;
    cout << "-v2 = " << -v2 << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "v1 + v2 = " << v1 + v2 << endl;
    cout << "v1 - v2 = " << v1 - v2 << endl;
    cout << "v1 * v2 = " << v1 * v2 << endl;
    cout << "v1 / v2 = " << v1 / v2 << endl;
    cout << "v1 ^ v2 = " << (v1 ^ v2) << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "v1 + c = " << v1 + c << endl;
    cout << "v1 - c = " << v1 - c << endl;
    cout << "v1 * c = " << v1 * c << endl;
    cout << "v1 / c = " << v1 / c << endl;
    cout << "v1 ^ c = " << (v1 ^ c) << endl;
    cout << "c ^ v1 = " << (c ^ v1) << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "(v1 == v2) = " << (v1 == v2) << endl;
    cout << "(v1 != v2) = " << (v1 != v2) << endl;
    cout << "(v1 < v2) = " << (v1 < v2) << endl;
    cout << "(v1 > v2) = " << (v1 > v2) << endl;
    cout << "(v1 <= v2) = " << (v1 <= v2) << endl;
    cout << "(v1 >= v2) = " << (v1 >= v2) << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "dot(v1, v2) = " << vec_op::dot(v1, v2) << endl;
    cout << "sum(v1) = " << vec_op::sum(v1) << endl;
    cout << "prod(v1) = " << vec_op::prod(v1) << endl;
    cout << "cast<double, int>(v1) = " << vec_op::cast<double, int>(v1) << endl;
    cout << "concat(v1, v2) = " << vec_op::concat(v1, v2) << endl;
    cout << "sort(v1) = " << vec_op::sort(v1) << endl;
    cout << "argsort(v1) = " << vec_op::argsort(v1) << endl;
    cout << "randomIndex(10) = " << vec_op::randomIndex(10) << endl;
    cout << "range(10) = " << vec_op::range(10) << endl;
    cout << "range(2,10,2) = " << vec_op::range(2, 10, 2) << endl;

    vec_op::fill(v1, 1);
    cout << "fill(v1, 1); v1 = " << v1 << endl;
    return 0;
}
