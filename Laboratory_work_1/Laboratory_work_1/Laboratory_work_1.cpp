// Вариант 5
#include <assert.h>
#include "AminoAcid.h"
#include <iostream>

int main()
{
    // тестирование конструктора по умолчанию
    AminoAcid aminoAcid1;
    assert(aminoAcid1.getAminoAcids() == "");

    // тестирование конструктора инициализации
    AminoAcid aminoAcid2("ABCD");
    assert(aminoAcid2.getAminoAcids() == "ABCD");

    // тестирование копирования
    AminoAcid aminoAcid3(aminoAcid2);
    assert(aminoAcid3.getAminoAcids() == "ABCD");

    // тестирование методов доступа полей класса
    aminoAcid3.addAminoAcids("EF1");
    assert(aminoAcid3.getAminoAcids() == "ABCDEF?");

    std::cout << "No errors during these tests!";
    return 0;
}