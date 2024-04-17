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
    cout << "������ѧ������: ";
    cin >> newStudent.name;
    cout << "������ѧ������: ";
    cin >> newStudent.age;
    cout << "������ѧ��רҵ: ";
    cin >> newStudent.major;
    cout << "������ѧ��ѧ��: ";
    cin >> newStudent.id;
    
    students.push_back(newStudent);
}

void displayStudents() {
    if (students.empty()) {
        cout << "ѧ���б�Ϊ��" << endl;
        return;
    }
    
    cout << "ѧ���б�:" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << "����: " << students[i].name << " ����: " << students[i].age << " רҵ: " << students[i].major << " ѧ��: " << students[i].id << endl;
    }
}

void modifyStudent() {
    string id;
    cout << "������Ҫ�޸ĵ�ѧ��ѧ��: ";
    cin >> id;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "������ѧ������: ";
            cin >> students[i].name;
            cout << "������ѧ������: ";
            cin >> students[i].age;
            cout << "������ѧ��רҵ: ";
            cin >> students[i].major;
            cout << "ѧ����Ϣ�޸ĳɹ�" << endl;
            return;
        }
    }
    
    cout << "δ�ҵ���ѧ��" << endl;
}

void deleteStudent() {
    string id;
    cout << "������Ҫɾ����ѧ��ѧ��: ";
    cin >> id;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "ѧ��ɾ���ɹ�" << endl;
            return;
        }
    }
    
    cout << "δ�ҵ���ѧ��" << endl;
}

void searchStudent() {
    string id;
    cout << "������Ҫ���ҵ�ѧ��ѧ��: ";
    cin >> id;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "����: " << students[i].name << " ����: " << students[i].age << " רҵ: " << students[i].major << " ѧ��: " << students[i].id << endl;
            return;
        }
    }
    
    cout << "δ�ҵ���ѧ��" << endl;
}

int main() {
    int choice;
    
    while (true) {
        cout << "��ѡ�����:" << endl;
        cout << "1. ���ѧ��" << endl;
        cout << "2. ��ʾ����ѧ��" << endl;
        cout << "3. �޸�ѧ����Ϣ" << endl;
        cout << "4. ɾ��ѧ��" << endl;
        cout << "5. ����ѧ��" << endl;
        cout << "6. �˳�" << endl;
        cout << "��������ѡ�����: ";
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
                cout << "������������������" << endl;
        }
    }

    return 0;
}
