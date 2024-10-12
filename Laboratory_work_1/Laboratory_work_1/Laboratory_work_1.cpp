// Вариант 5
#include <assert.h>
#include "AminoAcid.h"
#include "ProteinSequence.h"
#include <iostream>

int main()
{
    // тестирование конструктора по умолчанию
    AminoAcid aminoAcid1;
    ProteinSequence protSec1;
    assert(aminoAcid1.getAminoAcids() == "");
    assert(protSec1.getSequence() == "");

    // тестирование конструктора инициализации
    AminoAcid aminoAcid2("A");
    ProteinSequence protSec2("A");
    assert(aminoAcid2.getAminoAcids() == "A");
    assert(protSec2.getSequence() == "A");

    // тестирование копирования
    AminoAcid aminoAcid3(aminoAcid2);
    ProteinSequence protSec3(protSec2);
    assert(aminoAcid3.getAminoAcids() == "A");
    assert(protSec3.getSequence() == "A");

    // тестирование методов доступа полей класса
    aminoAcid3.addAminoAcids("EF1");
    assert(aminoAcid3.getAminoAcids() == "AEF?");
    // и тестирование межклассовго взаимодейтсвия
    protSec3.add(aminoAcid3); 
    assert(protSec3.getSequence() == "AAEF?");

    // тестирование перегруженной функции
    protSec1.translate('G', 'C', 'A');
    aminoAcid1.translate('G', 'G', 'G');
    protSec1.add(aminoAcid1);
    assert(protSec1.getSequence() == "AG");


    std::cout << "No errors during these tests!";
    return 0;
}