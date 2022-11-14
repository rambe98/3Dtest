#include <iostream>
#include "MuSoenMath.h"

using namespace std;

int main() {
	Vec3 v(1, 3, 2);
	cout << "�Է��� Vec�� ���"<< endl;
	cout << v.x << " " << v.y << " " << v.z << endl;

	cout << endl;

	cout << "��� �Է� 3 x 3" << endl;
	Mat3 mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	mat3.Transpose();
	mat3.ShowMat3();

	cout << endl;

	cout << "Mat3 * Vec3 ���� ���" << endl;
	Mat3 Mat3_Vec3 = mat3 * v;
	Mat3_Vec3.ShowMat3();

	cout << endl;

	cout << "Mat3_Translate ���"  << endl;
	Mat3 Mat3_trans = Mat3_Translate(3,5);
	Mat3_trans.ShowMat3();

	cout << endl;

	cout << "Mat3_Rotation ���" << endl;
	Mat3 Mat3_rotation = Mat3_Rotation(30.0f);
	Mat3_rotation.Show_SinCos();

	cout << endl;

	cout << "Mat3_Scale ���" << endl;
	Mat3 Mat3_scale = Mat3_Scale(2);
	Mat3_scale.ShowMat3();

	cout << endl;
	cout << "Mat3_Identity ���" << endl;
	mat3.Identity();
	mat3.ShowMat3();

	cout << endl;

	Vec4 v4(2, 3, 4, 1);
	cout << "�Է��� Vec�� ���" << endl;
	cout << v4.x << " " << v4.y << " " << v4.z << " " << v4.w << endl;

	cout << endl;

	cout << endl;
	cout << "��� �Է� 4 x 4" << endl;
	Mat4 mat4(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	mat4.Transpose();
	mat4.ShowMat4();

	cout << endl;

	cout << "Mat4_Translate ���" << endl;
	Mat4 Mat4_trans = Mat4_Translate(3, 5, 2);
	Mat4_trans.ShowMat4();

	cout << endl;

	cout << "Mat4_Translate ��� ���� ���" << endl;
	Mat4 multiplyTest = mat4 * Mat4_trans;
	multiplyTest.ShowMat4();

	cout << endl;

	cout << "Mat4_Rotation ���" << endl;
	Mat4 Mat4_rotation = Mat4_Rotation(30.0f);
	Mat4_rotation.Show_SinCos();

	cout << endl;

	cout << "Mat4_Scale ���" << endl;
	Mat4 Mat4_scale = Mat4_Scale(2);
	Mat4_scale.ShowMat4();

	cout << endl;

	cout << "Mat4_Vec4 ���� ���" << endl;
	Mat4 Mat4_Vec4 = mat4 * v4;
	Mat4_Vec4.ShowMat4();

	cout << endl;

	return 0;
}



//#include "MuSoenMath.h"
//
//void main() {
//    float x, y;
//    int answer;
//    cout << "X ��ǥ�� �Է��ϼ���." << endl;
//    cin >> x;
//    cout << "Y ��ǥ�� �Է��ϼ���." << endl;
//    cin >> y;
//
//    Vec3 Vector(x, y);
//    Mat3 Matrix = Mat3();
//    Vector.Print();
//
//    while (true) {
//        answer = 0;
//        cout << "���ϴ� ����� ��ȣ�� �Է��ϼ���." << endl;
//        cout << "1. �̵�" << endl;
//        cout << "2. ���� ����" << endl;
//        cout << "3. ũ�� ����" << endl;
//        cout << "4. ��ǥ ���" << endl;
//        cout << "5. ����" << endl;
//        cin >> answer;
//        switch (answer)
//        {
//        case 1:
//            cout << "X��ǥ�� �̵���Ű�� ������ŭ ���� �Է��ϼ���." << endl;
//            float moveX;
//            cin >> moveX;
//            cout << "Y��ǥ�� �̵���Ű�� ������ŭ ���� �Է��ϼ���." << endl;
//            float moveY;
//            cin >> moveY;
//            cout << "X��ǥ�� " << moveX << "��ŭ, Y��ǥ�� " << moveY << "��ŭ �̵��մϴ�." << endl;
//            Matrix.MoveSet(moveX, moveY);
//            Vector = Vector * Matrix;
//            break;
//        case 2:
//            cout << "ȸ����ų ������ �Է��ϼ���." << endl;
//            float Rotation;
//            cin >> Rotation;
//            Matrix.RotateSet(Rotation);
//            Vector = Vector * Matrix;
//            break;
//        case 3:
//            cout << "�� ��� �� ������ ���� �Է��ϼ���." << endl;
//            float Size;
//            cin >> Size;
//            Matrix.ScaleSet(Size);
//            Vector = Vector * Matrix;
//            break;
//        case 4:
//            Vector.Print();
//            break;
//        case 5:
//            cout << "���α׷��� �����մϴ�." << endl;
//            return;
//        default:
//            break;
//        }
//    }
//}




//#include <GLFW/glfw3.h>
//#include <glm/glm.hpp>
//
//
//#pragma comment(lib, "OpenGL32")
//
//static void error_callback(int error, const char* description)
//{
//    fputs(description, stderr);
//}
//static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
//{
//    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, GL_TRUE);
//
//}
//
//
//int main(void)
//{
//    GLFWwindow* window;
//    glfwSetErrorCallback(error_callback);
//    if (!glfwInit())
//        exit(EXIT_FAILURE);
//    window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);
//    if (!window)
//    {
//        glfwTerminate();
//        exit(EXIT_FAILURE);
//    }
//
//    glfwMakeContextCurrent(window);
//    glfwSetKeyCallback(window, key_callback);
//
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//
//    while (!glfwWindowShouldClose(window))
//    {
//        float ratio;
//        int width, height;
//        glfwGetFramebufferSize(window, &width, &height);
//        ratio = width / (float)height;
//
//        float test = 0;
//
//        ////90���� ���� ������ �����ϰ� ������
//        ////glm�� �ﰢ�Լ��� radian �������� �Է��� �ޱ� ������ ��ȯ�ؼ� �־��־���Ѵ�.
//        //glm::sin(glm::radians(90.0));  
//        
//        glClearColor(0.0f, 0.0f, 0.0f, 0.1f);
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        glBegin(GL_LINE_STRIP);
//
//        for (int i = 0; i <3600; i++) {
//
//            glVertex3f(glm::cos(glm::radians(45.0f)+ test), glm::sin(glm::radians(45.0f)+ test), 0);
//            test += 0.1f;
//        }
//        
//        /*glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
//        glVertex3f(0.0f, 1.0f, 0.0f);
//        glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
//        glVertex3f(1.0f, -1.0f, 0.0f);
//        glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
//        glVertex3f(-1.0f, -1.0f, 0.0f);
//        glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
//        glVertex3f(0.0f, 1.0f, 0.0f);*/
//        glEnd();   
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//    }
//    glfwDestroyWindow(window);
//    glfwTerminate();
//    
//    exit(EXIT_SUCCESS);
//}