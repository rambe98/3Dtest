#include <iostream>
#include "MuSoenMath.h"

using namespace std;

int main() {
	Vec3 v(1, 3, 2);
	cout << "입력한 Vec값 출력"<< endl;
	cout << v.x << " " << v.y << " " << v.z << endl;

	cout << endl;

	cout << "행렬 입력 3 x 3" << endl;
	Mat3 mat3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	mat3.Transpose();
	mat3.ShowMat3();

	cout << endl;

	cout << "Mat3 * Vec3 연산 행렬" << endl;
	Mat3 Mat3_Vec3 = mat3 * v;
	Mat3_Vec3.ShowMat3();

	cout << endl;

	cout << "Mat3_Translate 행렬"  << endl;
	Mat3 Mat3_trans = Mat3_Translate(3,5);
	Mat3_trans.ShowMat3();

	cout << endl;

	cout << "Mat3_Rotation 행렬" << endl;
	Mat3 Mat3_rotation = Mat3_Rotation(30.0f);
	Mat3_rotation.Show_SinCos();

	cout << endl;

	cout << "Mat3_Scale 행렬" << endl;
	Mat3 Mat3_scale = Mat3_Scale(2);
	Mat3_scale.ShowMat3();

	cout << endl;
	cout << "Mat3_Identity 행렬" << endl;
	mat3.Identity();
	mat3.ShowMat3();

	cout << endl;

	Vec4 v4(2, 3, 4, 1);
	cout << "입력한 Vec값 출력" << endl;
	cout << v4.x << " " << v4.y << " " << v4.z << " " << v4.w << endl;

	cout << endl;

	cout << endl;
	cout << "행렬 입력 4 x 4" << endl;
	Mat4 mat4(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	mat4.Transpose();
	mat4.ShowMat4();

	cout << endl;

	cout << "Mat4_Translate 행렬" << endl;
	Mat4 Mat4_trans = Mat4_Translate(3, 5, 2);
	Mat4_trans.ShowMat4();

	cout << endl;

	cout << "Mat4_Translate 행렬 연산 결과" << endl;
	Mat4 multiplyTest = mat4 * Mat4_trans;
	multiplyTest.ShowMat4();

	cout << endl;

	cout << "Mat4_Rotation 행렬" << endl;
	Mat4 Mat4_rotation = Mat4_Rotation(30.0f);
	Mat4_rotation.Show_SinCos();

	cout << endl;

	cout << "Mat4_Scale 행렬" << endl;
	Mat4 Mat4_scale = Mat4_Scale(2);
	Mat4_scale.ShowMat4();

	cout << endl;

	cout << "Mat4_Vec4 연산 행렬" << endl;
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
//    cout << "X 좌표를 입력하세요." << endl;
//    cin >> x;
//    cout << "Y 좌표를 입력하세요." << endl;
//    cin >> y;
//
//    Vec3 Vector(x, y);
//    Mat3 Matrix = Mat3();
//    Vector.Print();
//
//    while (true) {
//        answer = 0;
//        cout << "원하는 기능의 번호를 입력하세요." << endl;
//        cout << "1. 이동" << endl;
//        cout << "2. 각도 조정" << endl;
//        cout << "3. 크기 조정" << endl;
//        cout << "4. 좌표 출력" << endl;
//        cout << "5. 종료" << endl;
//        cin >> answer;
//        switch (answer)
//        {
//        case 1:
//            cout << "X좌표를 이동시키고 싶은만큼 값을 입력하세요." << endl;
//            float moveX;
//            cin >> moveX;
//            cout << "Y좌표를 이동시키고 싶은만큼 값을 입력하세요." << endl;
//            float moveY;
//            cin >> moveY;
//            cout << "X좌표를 " << moveX << "만큼, Y좌표를 " << moveY << "만큼 이동합니다." << endl;
//            Matrix.MoveSet(moveX, moveY);
//            Vector = Vector * Matrix;
//            break;
//        case 2:
//            cout << "회전시킬 각도를 입력하세요." << endl;
//            float Rotation;
//            cin >> Rotation;
//            Matrix.RotateSet(Rotation);
//            Vector = Vector * Matrix;
//            break;
//        case 3:
//            cout << "몇 배로 할 것인지 값을 입력하세요." << endl;
//            float Size;
//            cin >> Size;
//            Matrix.ScaleSet(Size);
//            Vector = Vector * Matrix;
//            break;
//        case 4:
//            Vector.Print();
//            break;
//        case 5:
//            cout << "프로그램을 종료합니다." << endl;
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
//        ////90도와 같이 각도로 연산하고 싶으면
//        ////glm의 삼각함수는 radian 형식으로 입력을 받기 때문에 변환해서 넣어주어야한다.
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