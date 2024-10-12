#include "ProteinSequence.h"
#include <map>


ProteinSequence::ProteinSequence()
{
	sequence = "";
}

ProteinSequence::ProteinSequence(std::string _aminoAcids)
{
	sequence = _aminoAcids;
}

ProteinSequence::ProteinSequence(const ProteinSequence& _sequence)
{
	sequence = _sequence.sequence;

}

ProteinSequence::~ProteinSequence(){}

void ProteinSequence::translate(const char& c1, const char& c2, const char& c3)
{
	std::string aminoCode = { c1, c2, c3 };
	const std::map<std::string, char> codonTable =
	{
		{ "GCA", 'A' },
		{ "GCC", 'A' },
		{ "GCG", 'A' },
		{ "GCU", 'A' },
		{ "UGC", 'C' },
		{ "UGU", 'C' },
		{ "GAC", 'D' },
		{ "GAU", 'D' },
		{ "GAA", 'E' },
		{ "GAG", 'E' },
		{ "UUC", 'F' },
		{ "UUU", 'F' },
		{ "GGA", 'G' },
		{ "GGC", 'G' },
		{ "GGG", 'G' },
		{ "GGU", 'G' },
		{ "CAC", 'H' },
		{ "CAU", 'H' },
		{ "AUA", 'I' },
		{ "AUC", 'I' },
		{ "AUU", 'I' },
		{ "AAA", 'K' },
		{ "AAG", 'K' },
		{ "UUA", 'L' },
		{ "UUG", 'L' },
		{ "CUA", 'L' },
		{ "CUC", 'L' },
		{ "CUG", 'L' },
		{ "CUU", 'L' },
		{ "AUG", 'M' },
		{ "AAC", 'N' },
		{ "AAU", 'N' },
		{ "CCA", 'P' },
		{ "CCC", 'P' },
		{ "CCG", 'P' },
		{ "CCU", 'P' },
		{ "CAA", 'Q' },
		{ "CAG", 'Q' },
		{ "AGA", 'R' },
		{ "AGG", 'R' },
		{ "CGA", 'R' },
		{ "CGC", 'R' },
		{ "CGG", 'R' },
		{ "CGU", 'R' },
		{ "AGC", 'S' },
		{ "AGU", 'S' },
		{ "UCA", 'S' },
		{ "UCC", 'S' },
		{ "UCG", 'S' },
		{ "UCU", 'S' },
		{ "ACA", 'T' },
		{ "ACC", 'T' },
		{ "ACG", 'T' },
		{ "ACU", 'T' },
		{ "GUA", 'V' },
		{ "GUC", 'V' },
		{ "GUG", 'V' },
		{ "GUU", 'V' },
		{ "UGG", 'W' },
		{ "UAC", 'Y' },
		{ "UAU", 'Y' },
	};
	if (codonTable.find(aminoCode) != codonTable.end())
	{
		sequence.push_back(codonTable.at(aminoCode));
	}
	else
	{
		sequence.push_back('?');
	}
}

void ProteinSequence::add(AminoAcid aminoAcid)
{
	std::string str = aminoAcid.getAminoAcids();
	for (size_t i = 0; i != str.size(); ++i)
	{
		if (!std::isalpha(str[i]))
		{
			sequence.push_back('?');
		}
		else
		{
			sequence.push_back(str[i]);
		}
	}
}

std::string ProteinSequence::getSequence()
{
	return sequence;
}
