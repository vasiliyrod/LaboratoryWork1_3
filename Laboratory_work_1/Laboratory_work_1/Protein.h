#pragma once
#include <string>
class Protein
{
public:
	Protein(); // конструктор по умолчанию
	Protein(std::string _sequence); // конструктор инициализации
	Protein(const Protein& _protein); // конструктор копирования
	~Protein();

	std::string concat(std::string sequence2);
	std::string getProteinSequence();
	void setProteinSequence(std::string sequence2);
private:
	std::string sequence;
};

