//Импорт стандартной библиотеки C\C++
#include <stdio.h>
//Импорт библиотеки для работы с функциями и утилитами Windows
#include <Windows.h>
//Импорт библиотеки для функции setlocale
#include <locale.h>


//Написать программу, которая выводит на экран четверостишие:


//Точка входа в программу
int main(){
    //Функция которая задает локализацию программы
    setlocale(LC_ALL, "Russian");
    //Функция которая меняет кодировку терминала, для вывода русского языка
    SetConsoleCP(1251);
    //Вывод в консоль
    printf("Унылая пора! Очей очарованье!\nПриятна мне твоя прощальная краса —\n");
    printf("Люблю я пышное природы увяданье,\nВ багрец и золото одетые л е с а .\n");
    printf("А. С. Пушкин");
    
    return 0;
}