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
        cout << i + 1 << ". " << tasks[i] << endl;
    }
    cout << "==================" << endl;
}

void addTask() {
    string task;
    cout << "Введите новую задачу: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Задача добавлена!" << endl;
}

// Добавляем функцию removeTask()
void removeTask() {
    if (tasks.empty()) {
        cout << "Список задач пуст!" << endl;
        return;
    }

    showTasks();
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
// Добавляем функцию loadTasks()
void loadTasks() {
    ifstream file(FILENAME);
    if (file.is_open()) {
        tasks.clear();
        string task;
        while (getline(file, task)) {
            if (!task.empty()) {
                tasks.push_back(task);
            }
        }
        file.close();
    }
}

void saveTasks() {
    ofstream file(FILENAME);
    if (file.is_open()) {
        for (const auto& task : tasks) {
            file << task << endl;
        }
        file.close();
    }
}

int main() {
    int choice;

    do {
        cout << "\n=== МЕНЮ ===" << endl;
        cout << "1. Показать задачи" << endl;
        cout << "2. Добавить задачу" << endl;
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
        case 0:
            cout << "До свидания!" << endl;
            break;
        default:
            cout << "Неверный выбор!" << endl;
        }
    } while (choice != 0);

    return 0;
}