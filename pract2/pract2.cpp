// pract2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Employee {
private:
    char name[255];
    double salary;

public:
    void input() {
        std::cout << "Введите имя: ";
        std::cin.getline(name, 255);
        std::cout << "Введите зарплату: ";
        std::cin >> salary;
    }

    void raiseSalary(double percent) {
        salary += salary * (percent / 100);
    }

    void show() {
        std::cout << name << ": " << salary << " руб." << std::endl;
    }
};

struct Student {    
    char name[255];
    double grades[50]; 
    int gradesCount;
};

int main()
{
    ////Одинарный массив 
    //setlocale(0, "rus");
    //int size;
    //int arr[20];
    //std::cout << "Введите размер массива: ";
    //std::cin >> size;
    //if (size <= 0) {
    //    std::cout << "Размер массива должен быть положительным числом" << std::endl;
    //    return 0;
    //}

    //if (size > 20) {
    //    std::cout << "Размер массива не может превышать 20" << std::endl;
    //    return 0;
    //}
    //for (int i = 0; i < size; i++) {
    //    std::cout << "Элемент " << i + 1 << ": ";
    //    std::cin >> arr[i];
    //}
    //std::cout << "Исходный массив: ";
    //for (int i = 0; i < size; i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;
    //for (int i = 0; i < size - 1; i++) {
    //    for (int j = 0; j < size - i - 1; j++) {
    //        if (arr[j] > arr[j + 1]) {
    //            int temp = arr[j];
    //            arr[j] = arr[j + 1];
    //            arr[j + 1] = temp;
    //        }
    //    }
    //}
    //std::cout << "Отсортированный массив: ";
    //for (int i = 0; i < size; i++) {
    //    std::cout << arr[i] << " ";
    //}
    //std::cout << std::endl;



    ////Многомерный массив 
    //setlocale(0, "rus");
    //int arr1[5][5], arr2[5][5];
    //int rows1, cols1, rows2, cols2;
    //int totalSum = 0;
    //std::cout << "Введите размеры первого массива (до 5): ";
    //std::cin >> rows1 >> cols1;
    //std::cout << "Введите элементы первого массива:" << std::endl;
    //for (int i = 0; i < rows1; i++) {
    //    for (int j = 0; j < cols1; j++) {
    //        std::cout << "arr1[" << i << "][" << j << "] = ";
    //        std::cin >> arr1[i][j];
    //    }
    //}
    //std::cout << "Введите размеры второго массива (до 5): ";
    //std::cin >> rows2 >> cols2;
    //std::cout << "Введите элементы второго массива:" << std::endl;
    //for (int i = 0; i < rows2; i++) {
    //    for (int j = 0; j < cols2; j++) {
    //        std::cout << "arr2[" << i << "][" << j << "] = ";
    //        std::cin >> arr2[i][j];
    //    }
    //}
    //std::cout << "Объединенный массив:" << std::endl;
    //for (int i = 0; i < rows1; i++) {
    //    for (int j = 0; j < cols1; j++) {
    //        std::cout << arr1[i][j] << "\t";
    //        totalSum += arr1[i][j];
    //    }
    //    std::cout << std::endl;
    //}

    //for (int i = 0; i < rows2; i++) {
    //    for (int j = 0; j < cols2; j++) {
    //        std::cout << arr2[i][j] << "\t";
    //        totalSum += arr2[i][j];
    //    }
    //    std::cout << std::endl;
    //}
    //std::cout << "\nСумма всех элементов: " << totalSum << std::endl;



    ////Структуры
    //setlocale(0, "rus");
    //Student student;
    //double average;
    //std::cout << "Введите имя студента: ";
    //std::cin.getline(student.name, 255);
    //std::cout << "Введите количество оценок: ";
    //std::cin >> student.gradesCount;
    //std::cout << "Введите " << student.gradesCount << " оценок:" << std::endl;
    //for (int i = 0; i < student.gradesCount; i++) {
    //    std::cout << "Оценка " << i + 1 << ": ";
    //    std::cin >> student.grades[i];
    //    if (student.grades[i] < 0 || student.grades[i] > 5) {
    //        std::cout << "Оценка должна быть от 0 до 5" << std::endl;
    //        return 0;
    //    }
    //}
    //if (student.gradesCount == 0) {
    //    average = 0.0;
    //}
    //else {
    //    double sum = 0.0;
    //    for (int i = 0; i < student.gradesCount; i++) {
    //        sum += student.grades[i];
    //    }
    //    average = sum / student.gradesCount;
    //}
    //std::cout << "Информация о студенте:" << std::endl;
    //std::cout << "Имя: " << student.name << std::endl;
    //std::cout << "Оценки: ";
    //for (int i = 0; i < student.gradesCount; i++) {
    //    std::cout << student.grades[i] << " ";
    //}
    //std::cout << std::endl;
    //printf("Средний балл: %.2f\n", average);



    //Классы  
    setlocale(0, "rus");
    Employee emp;
   
    emp.input();
    std::cout << "До повышения: ";
    emp.show();
    double percent;
    std::cout << "На сколько процентов повысить? ";
    std::cin >> percent;
    emp.raiseSalary(percent);
    std::cout << "После повышения: ";
    emp.show();
}
