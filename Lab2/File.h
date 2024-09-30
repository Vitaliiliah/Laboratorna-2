#pragma once
#include <string>
using namespace std;

class File {
private:
    string name;         // Назва файлу
    string creationDate; // Дата створення
    string creationTime; // Час створення
    string attributes;   // Атрибути файлу
    int size;            // Розмір файлу в байтах

public:
	// Конструктор за замовчуванням
	File();
    // Конструктор з параметрами
    File(string name, int size, string creationDate, string creationTime, string attributes);
    
    // Метод виведення інформації про файл
    void print();
    // Методи get
	string getName();
    
   
};




