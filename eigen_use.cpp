#include <eigen3/Eigen/Dense>
#include <iostream>
using namespace std;

int main()
{
    Eigen::MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    cout << m << endl;

    Eigen::Matrix3d m3;
    m3 << 9, 8, 7, 6, 5, 4, 3, 2, 1;
    cout << "m3=\n"
         << m3 << endl;

    Eigen::Vector3d v1(1, 2, 3);
    Eigen::Vector3d v2;
    v2 << 4, 5, 6;
    cout << v1 << endl;
    cout << v2 << endl;

    return 0;
}
