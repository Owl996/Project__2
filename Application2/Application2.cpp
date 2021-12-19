// Application2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

std::string task_3(const std::string& s1, const std::string& s2) {
    return s1 + s2;
}

int main()
{
    std::string str1 = "Hello", str2 = " World";

    std::cout << task_3(str1, str2) << std::endl;

    system("pause");
    return 0;
}