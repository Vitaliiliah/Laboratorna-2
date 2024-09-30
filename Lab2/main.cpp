#include "Catalog.h"
#include "File.h"

int main() {
    // Створюємо кілька файлів
    File* file1 = new File("file1.txt", 1500, "25.09.2024", "12:30", "Звичайний");
    File* file2 = new File("file2.txt", 2500, "26.09.2024", "13:30", "Прихований");
    File* file3 = new File("file3.txt", 3000, "27.09.2024", "14:30", "Системний");
    File* file3 = new File("file3.txt", 3000, "27.09.2024", "14:30", "Системний");
    File* file3 = new File("file3.txt", 3000, "27.09.2024", "14:30", "Системний");
    File* file3 = new File("file3.txt", 3000, "27.09.2024", "14:30", "Системний");

    // Створюємо каталог на 3 файли
    Catalog catalog(3);

    // Додаємо файли в каталог
    catalog.addFile(file1);
    catalog.addFile(file2);
    catalog.addFile(file3);

    // Виводимо всі файли в каталозі
    catalog.displayFiles();

    return 0;
}