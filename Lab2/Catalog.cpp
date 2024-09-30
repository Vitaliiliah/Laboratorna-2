#include "Catalog.h"
#include <iostream>
using namespace std;
Catalog::Catalog() {
	current_files = 0;  // Початкова кількість файлів
   
}

// Додаємо файл до каталогу
void Catalog::addFile(File& file) {
    if (current_files < 5) { 
        files[current_files] = file;  // Додаємо файл
        current_files++;
    }
    else {
        cout << "Error: Catalog is full." << endl;
    }
}

// Видаляємо файл з каталогу
void Catalog::deleteFile(string& fileName) {
  for (int i = 0; i < current_files; i++) {
     if (files[i].getName() == fileName) {
        for (int j = i; j < current_files - 1; j++) {
           files[j] = files[j + 1];
       }
      current_files--; // Зменшуємо кількість файлів на одиницю
      cout << "File " << fileName << " deleted." << endl; 
      return; 
       }
  }
   
    cout << "Error: File " << fileName << " not found." << endl;
}

//Метод пошуку файлу
void  Catalog::findFile(string& fileName) {
    for (int i = 0; i < current_files; i++) {
        if (files[i].getName() == fileName) {
            cout << "File " << fileName << " found." << endl;
            return;
        }

    }
}
bool Catalog::findsFile(string& fileName) { 
    for (int i = 0; i < current_files; i++) {
		if (files[i].getName().find(fileName) != -1) { 
			cout << "File " << fileName << " found." << endl;
			return true ;
		}
    }
	cout << "Error: File " << fileName << " not found." << endl;
    return false;
}
// Виводимо інформацію про всі файли у каталозі
void Catalog::show() {
    for (int i = 0; i < current_files; i++) {
        files[i].print();  // Виводимо інформацію про файл
        cout << endl;
    }
}

// Деструктор
Catalog::~Catalog() { 
	cout << "Catalog deleted." << endl;
}

