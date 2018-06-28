
#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<fstream>
#include<string>
#include<iostream>
using namespace std;
class Sequence
{
public:
	string _filename;

char z[10];
        int q ;
        Sequence(string filename);
        int length();
        int numberOf(char base);
        string longestConsecutive();

        string longestRepeated();
};
#endif
