#pragma once
#include <string>
class Protein
{
public:
	Protein(); // ����������� �� ���������
	Protein(std::string _sequence); // ����������� �������������
	Protein(const Protein& _protein); // ����������� �����������
	~Protein();

	std::string concat(std::string sequence2);
	std::string getProteinSequence();
	void setProteinSequence(std::string sequence2);
private:
	std::string sequence;
};

