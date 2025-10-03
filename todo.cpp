#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> tasks;

void showTasks() {
    if (tasks.empty()) {
        cout << "Список задач пуст!" << endl;
        return;
    }

    cout << "=== СПИСОК ДЕЛ ===" << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << (i + 1) << ". " << tasks[i] << endl;
    }
    cout << "==================" << endl;
}

void addTask() {
    string task;
    cout << "Введите задачу: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Задача добавлена!" << endl;
}

void deleteTask() {
    showTasks();
    if (tasks.empty()) return;

    int index;
    cout << "Введите номер задачи для удаления: ";
    cin >> index;

    if (index < 1 || index > tasks.size()) {
        cout << "Неверный номер задачи!" << endl;
        return;
    }

    tasks.erase(tasks.begin() + index - 1);
    cout << "Задача удалена!" << endl;
}

int main() {
    int choice;

    do {
        cout << "\n=== МЕНЮ ===" << endl;
        cout << "1. Показать задачи" << endl;
        cout << "2. Добавить задачу" << endl;
        cout << "3. Удалить задачу" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1:
            showTasks();
            break;
        case 2:
            addTask();
            break;
        case 3:
            deleteTask();
            break;
        case 0:
            cout << "До свидания!" << endl;
            break;
        default:
            cout << "Неверный выбор!" << endl;
        }
    } while (choice != 0);

    return 0;
}