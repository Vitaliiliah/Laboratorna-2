#pragma once

#include "File.h"

class Catalog {
private:
    int current_files;  // Поточна кількість файлів
	File files[5]; // Створення масиву 

public:
    Catalog();  
    void addFile(File& file);  
	void deleteFile(string& fileName);  
	void findFile(string& fileName);
	bool findsFile(string& fileName);
    void show(); 

    ~Catalog(); 
};

