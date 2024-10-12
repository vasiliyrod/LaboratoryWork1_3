#pragma once
#include "Translatable.h"
#include "AminoAcid.h"
#include <iostream>
#include <string>
#include <map>

class ProteinSequence : public Translatable
{
public:
	// ������������ ����� Translatable
	ProteinSequence(); // ����������� �� ���������
	ProteinSequence(std::string _aminoAcids);
	ProteinSequence(const ProteinSequence& _sequence);
	~ProteinSequence();

	void translate(const char& c1, const char& c2, const char& c3) override;
	void add(AminoAcid aminoAcid);
	std::string getSequence();
private:
	std::string sequence;


};