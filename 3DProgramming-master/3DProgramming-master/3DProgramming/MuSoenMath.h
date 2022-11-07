#pragma once
#include <iostream>
#include <cmath>

using namespace std;
class Mat3 { // ���� Mat3 Ŭ����
public:
    float Mat[3][3]; // ��� ���� 2���� �迭 (������ǥ)

    Mat3() { //  Mat ������
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                Mat[i][j] = 0; // ��� ���� �ʱ�ȭ
            }
        }
    }
    void Reset() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                Mat[i][j] = 0;
            }
        }
        Mat[2][2] = 1;
    }

    void MoveSet(float x, float y) { //  �̵���ȯ�� Mat3 ����
        Reset();
        for (int i = 0; i < 3; i++) {
            Mat[i][i] = 1;
        }
        Mat[2][0] = x; // Mat3 ����� x�� ����
        Mat[2][1] = y; // Mat3 ����� y�� ����
    }

    void ScaleSet(float s) {
        Reset();
        Mat[0][0] = s;
        Mat[1][1] = s;
    }

    void RotateSet(float r) {
        Reset();
        double Rotate = r * (3.14 / 180);
        Mat[0][0] = cos(Rotate);
        Mat[0][1] = (-sin(Rotate));
        Mat[1][0] = sin(Rotate);
        Mat[1][1] = cos(Rotate);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << Mat[i][j] << " "; // ��� ���� �ʱ�ȭ
            }
            cout << endl;
        }
    }
};

class Vec3 { // Vec3 Ŭ����
public:
    float Position[2]; // ��� ���� �� (float)

    Vec3(float x, float y) { // ������
        Position[0] = x;
        Position[1] = y;
    }

    void Print() {
        cout << "X��ǥ : " << Position[0] << endl;
        cout << "Y��ǥ : " << Position[1] << endl;
    }

    Vec3 operator *(Mat3& p)
    {
        float x = Position[0];
        float y = Position[1];
        float z = 1;
        float a = (x * p.Mat[0][0]) + (y * p.Mat[1][0]) + (z * p.Mat[2][0]);
        float b = (x * p.Mat[0][1]) + (y * p.Mat[1][1]) + (z * p.Mat[2][1]);
        return Vec3(a, b);
    }
};