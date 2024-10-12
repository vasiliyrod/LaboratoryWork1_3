// �������� ������ �������������; ������ ����, ��� ����� ������� �������� � ������
#pragma once
#include "Translatable.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>


class AminoAcid : Translatable
{
public:
	AminoAcid(); // ����������� �� ���������
	AminoAcid(std::string _aminoAcids); // ����������� �������������
	AminoAcid(const AminoAcid &_aminoAcid); // ����������� �����������
	~AminoAcid();

	void translate(const char& c1, const char& c2, const char& c3) override;
	void addAminoAcids(std::string _aminoAcids);
	std::string getAminoAcids();
private:
	std::string aminoAcids;
};


