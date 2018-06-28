#include<string>
#include<iostream>
#include<fstream>
#include"Sequence.h"
using namespace std;
int main()
{

	Sequence s1("dna.txt");

	s1.length();
	s1.numberOf('A');
	s1.numberOf('G');
	s1.numberOf('C');
	s1.numberOf('T');
	s1.longestConsecutive();
     
	return 0;

}
