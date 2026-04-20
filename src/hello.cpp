#include <string>
#include <iostream>
#include "hello.hpp"
#include <cctype>
using namespace std;

bool blank(const string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (!isspace(s[i])) {
            return false;
        }
    }
    return true;
}

bool TodoList::add(const string& task) {
    if (blank(task)) {
        return false;
    }
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i] == task && done[i] == false) {
            return false;
        }
    }
    tasks.push_back(task);
    done.push_back(false);
    return true;
}
bool TodoList::complete(const string &task) {
 if (blank(task)) {
     return false;
 }
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i] == task && done[i] == false) {
            done[i] = true;
            return true;
        }
    }
    return false;
}
void TodoList::clear() {
    tasks.clear();
    done.clear();
}
void TodoList::all() const {
    if (tasks.empty()) {
        cout << "List is empty." << endl;
        return;
    }
    for (int i = 0; i < tasks.size(); i++) {
       if (done[i]) {
           cout << "|X|: " << tasks[i] << endl;
       }
        else {
            cout <<"| |:" << tasks[i] << endl;
        }

    }
}
void TodoList::complete() const {
bool exists = false;
    for (int i = 0; i < tasks.size(); i++) {
        if (done[i]) {
            cout << "|X|: " << tasks[i] << endl;
            exists = true;
        }
    }
    if (!exists) {
        cout << "No tasks found." << endl;
    }
}

void TodoList::incomplete() const {
    bool exists = false;
    for (int i = 0; i < tasks.size(); i++) {
        if (!done[i]) {
            cout << "| |: " << tasks[i] << endl;
            exists = true;
        }
    }
    if (!exists) {
        cout << "No tasks found." << endl;
    }
}