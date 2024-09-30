#include "File.h"
#include <iostream>
using namespace std;
//Конструктор за замовчуванням
File::File() {
	name = "";
	size = 0;
	creationDate = " ";
	creationTime = " ";
	attributes = " ";

	
}
// Конструктор з параметрами
File::File(string name, int size, string creationDate, string creationTime, string attributes) {
	this->name = name;
    this->size = size;
    this->creationDate = creationDate;
    this->creationTime = creationTime;
    this->attributes = attributes;
}
// Методи get
string File::getName() {
    return name;
}
// Method to print file information
void File::print() {
    cout << "File Name: " << name << endl;
    cout << "File Size: " << size << " bytes" << endl;
    cout << "Creation Date: " << creationDate << endl;
    cout << "Creation Time: " << creationTime << endl;
    cout << "Attributes: " << attributes << endl;
}

