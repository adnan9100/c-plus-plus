#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class ToDoList {
    private:
        std::vector<std::string> tasks;
    public:
        void addTask(const std::string& task) {
            tasks.push_back(task);
        }
        void displayTasks() {
            for(int i = 0; i < tasks.size(); i++) {
                std::cout << i+1 << ". " << tasks[i] << std::endl;
            }
        }
        void saveTasksToFile() {
            std::ofstream file("tasks.txt");
            for(const auto& task : tasks) {
                file << task << std::endl;
            }
            file.close();
        }
};

int main() {
    ToDoList myToDoList;
    std::string task;
    int choice;
    do {
        cout << "ToDo List Menu:\n";
        cout << "1. Add task\n";
        cout << "2. Display tasks\n";
        cout << "3. Save tasks to file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // clear the newline character from the buffer
        switch(choice) {
            case 1:
                std::cout << "Enter a task: ";
                std::getline(std::cin, task);
                myToDoList.addTask(task);
                break;
            case 2:
                myToDoList.displayTasks();
                break;
            case 3:
                myToDoList.saveTasksToFile();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while(true);
    
    return 0;
}

