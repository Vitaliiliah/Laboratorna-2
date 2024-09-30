#include "File.h"
#include "Catalog.h"
#include <iostream>

using namespace std;

int main() {
    cout << "----------------------------------------" << endl;
    cout << "Files in the catalog:" << endl;
    cout << "----------------------------------------" << endl;
    // Створюємо файли
    File file1("OOP.txt", 500, "25.09.2024", "12:30", "ReadOnly"); 
    File file2("Devops.txt", 1024, "26.09.2024", "14:50", "Hidden");
    File file3("Rust tutorial.txt", 1024, "26.09.2024", "14:50", "Hidden");
    File file4("controller_config.txt", 1024, "26.09.2024", "14:50", "Hidden");
    File file5("cheat.txt", 1024, "26.09.2024", "14:50", "Hidden");
    // Створюємо каталог 
    Catalog catalog;
    // Додаємо файли до каталогу
    catalog.addFile(file1);
    catalog.addFile(file2);
    catalog.addFile(file3);
    catalog.addFile(file4);
	catalog.addFile(file5);
    
    cout << endl;
    catalog.show();


    
    cout << "----------------------------------------" << endl;
    cout << "Deleting file" << endl;
    cout << "----------------------------------------" << endl;
    // Видаляємо файл
    string deleteFile = "Rust tutorial.txt";
    catalog.deleteFile(deleteFile);
    cout << endl;
    catalog.show();
    
    
   
    cout << "----------------------------------------" << endl;
    cout << "FindFale" << endl;
    cout << "----------------------------------------" << endl;
   
    string filenames = "cheat.txt";
	catalog.findFile(filenames);
    cout << endl;
    catalog.show();

    cout << "----------------------------------------" << endl;
    cout << "findsFile" << endl;
    cout << "----------------------------------------" << endl;
	
    string filename = "de";
	catalog.findsFile(filename);
	cout << endl;
	catalog.show();



    cout << "----------------------------------------" << endl;
    cout << "Delete Catalog " << endl;
    cout << "----------------------------------------" << endl;


    return 0;

}

