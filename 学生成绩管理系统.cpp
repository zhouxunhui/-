#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Student {
    string name;
    int age;
    string major;
    string id;
};

vector<Student> students;

void addStudent() {
    Student newStudent;
    cout << "请输入学生姓名: ";
    cin >> newStudent.name;
    cout << "请输入学生年龄: ";
    cin >> newStudent.age;
    cout << "请输入学生专业: ";
    cin >> newStudent.major;
    cout << "请输入学生学号: ";
    cin >> newStudent.id;
    
    students.push_back(newStudent);
}

void displayStudents() {
    if (students.empty()) {
        cout << "学生列表为空" << endl;
        return;
    }
    
    cout << "学生列表:" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << "姓名: " << students[i].name << " 年龄: " << students[i].age << " 专业: " << students[i].major << " 学号: " << students[i].id << endl;
    }
}

void modifyStudent() {
    string id;
    cout << "请输入要修改的学生学号: ";
    cin >> id;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "请输入学生姓名: ";
            cin >> students[i].name;
            cout << "请输入学生年龄: ";
            cin >> students[i].age;
            cout << "请输入学生专业: ";
            cin >> students[i].major;
            cout << "学生信息修改成功" << endl;
            return;
        }
    }
    
    cout << "未找到该学生" << endl;
}

void deleteStudent() {
    string id;
    cout << "请输入要删除的学生学号: ";
    cin >> id;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "学生删除成功" << endl;
            return;
        }
    }
    
    cout << "未找到该学生" << endl;
}

void searchStudent() {
    string id;
    cout << "请输入要查找的学生学号: ";
    cin >> id;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "姓名: " << students[i].name << " 年龄: " << students[i].age << " 专业: " << students[i].major << " 学号: " << students[i].id << endl;
            return;
        }
    }
    
    cout << "未找到该学生" << endl;
}

int main() {
    int choice;
    
    while (true) {
        cout << "请选择操作:" << endl;
        cout << "1. 添加学生" << endl;
        cout << "2. 显示所有学生" << endl;
        cout << "3. 修改学生信息" << endl;
        cout << "4. 删除学生" << endl;
        cout << "5. 查找学生" << endl;
        cout << "6. 退出" << endl;
        cout << "输入数字选择操作: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                modifyStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                searchStudent();
                break;
            case 6:
                return 0;
            default:
                cout << "输入有误，请重新输入" << endl;
        }
    }

    return 0;
}
