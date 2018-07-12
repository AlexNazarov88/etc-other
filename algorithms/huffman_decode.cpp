
#include <iostream>
#include <string>
#include <unordered_map>

/*
Восстановите строку по её коду и беспрефиксному коду символов.

В первой строке входного файла заданы два целых числа k и l через пробел — количество различных букв, встречающихся в строке,и размер получившейся закодированной строки, соответственно. В следующих k строках записаны коды букв в формате "letter: code".
Ни один код не является префиксом другого. Буквы могут быть перечислены в любом порядке. В качестве букв могут встречаться лишь строчные буквы латинского алфавита; каждая из этих букв встречается в строке хотя бы один раз. Наконец, в последней строке записана закодированная строка. Исходная строка и коды всех букв непусты. Заданный код таков, что закодированная строка имеет минимальный возможный размер.
В первой строке выходного файла выведите строку s. Она должна состоять из строчных букв латинского алфавита. Гарантируется, что длина правильного ответа не превосходит 104 символов.
*/


int main()
{
    // Считываем количество букв и размер закодированной строки
    unsigned int letters_num = 0, code_line_size = 0;
    std::cin >> letters_num >> code_line_size;
    // Считываем буквы с кодами
    std::unordered_map<std::string, char> haffman_map;
    for (unsigned int i = 0; i < letters_num; ++i) {
        std::string code;
        std::getline(std::cin, code);
        if (code.size() < 4) { --i; continue; }
        char ch = code[0];
        std::string cd = code.substr(3, code.size());
        haffman_map.insert(std::pair<std::string, char>(cd, ch));
    }

    // Считываем закодированную строку
    std::string code_line;
    std::getline(std::cin, code_line);
    // Проходим посимвольно по закодированной строке
    // и выводим раскодированные символы
    std::string code;
    for (auto ch : code_line) {
        code += ch;
        if (haffman_map.find(code) != haffman_map.end()) {
            std::cout << haffman_map.at(code);
            code.erase();
        }
    }

    //std::cout << std::endl;
    return 0;
}