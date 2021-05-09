#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct student {
    string name;
    string surname;
    int group;
};

int main() {
    vector<student> students;
    string name, surname;
    int group;

    cin >> name >> surname >> group;
    students.push_back({name, surname, group});

    cout << students.size() << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << i + 1 << " " << students[i].name << "\t" << students[i].surname << "\t" << students[i].group << endl;

    }
    return 0;
}
