#include "Protein.h"
#include<iostream>

Protein::Protein()
{
	sequence = "";
}

Protein::Protein(std::string _sequence)
{
	sequence = _sequence;
}

Protein::Protein(const Protein& _protein)
{
	sequence = _protein.sequence;
}

Protein::~Protein() {}

std::string Protein::concat(std::string sequence2)
{
	std::string answer = sequence;
	int i = 0;

	// случай если начало первого совпадает с концом второго
	int count = 0;

	for (i = 1; i < answer.size() && i < sequence2.size(); i++)
	{
		if (answer.substr(0, i) == sequence2.substr(sequence2.size() - i, i))
		{
			count = i;
		}
	}

	if (count != 0) 
	{
		sequence2.erase(sequence2.size() - count);
		answer = sequence2 + answer;
	}
	else //пробуем случай если начало второго совпадает с концом первого
	{
		
		for (i = 1; i < answer.size() && i < sequence2.size(); i++)
		{
			if (sequence2.substr(0, i) == answer.substr(answer.size() - i, i))
			{
				count = i;
			}
		}
		if (count != 0)
		{
			answer.erase(answer.size() - count);
			answer = answer + sequence2;
		}
		else
		{
			return "?";
		}
	}

	return answer;
}

std::string Protein::getProteinSequence()
{
	return sequence;
}

void Protein::setProteinSequence(std::string sequence2)
{
	sequence = sequence2;
	return;
}
