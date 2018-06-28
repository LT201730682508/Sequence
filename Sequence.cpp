#include<string>
#include<iostream>
#include<fstream>
#include<string.h>
#include"Sequence.h"
using namespace std;

Sequence::Sequence(string filename)
{
       cin>>filename;
_filename=filename;
strcpy(z,_filename.c_str());
	  ifstream file(z);
 int m = 0;
        int line = 0;
        char s;
 while (file.get(s))
        {
                if (s == '\n')
                        line++;
				                m++;
        }
  q=m-line;

}
;
int Sequence::length()
{
       
       
       
		cout<<q<<endl;
     
        return 0;
}

int Sequence::numberOf(char base)
{
        ifstream file(z);
        int k = 0;
        char s;
        while (file.get(s))
        {

                if (s == base)
                        k++;
                else
                        continue;
        }
        cout << base << ":" << k << endl;
        return 0;
}
string Sequence::longestConsecutive()
{
       
        char b = '0';
        char a;
        int B = 0;
        int A = 1;
        char c;
        ifstream file(z);
        while (file.get(a))
        {

                if (a == '\n')
                        continue;
                else
                {

                        if (a == b)
                        {
                                A++;

		            }
                        else
                        {

                                if (A > B)
                                {

                                        B = A;
                                        c = b;
                                }
                                A = 1;
                        }
                }

                        b = a;
        }
		for (int i = 0; i < B; i++)
        {
                cout << c;
        }
        

        return "\n";
}
string Sequence::longestRepeated()
{   int k=0;
	char a;
	char b[1200000];
	 ifstream file("dna.txt");
        while (file.get(a))
		{
			
                if (a == '\n')
                        continue;
				else
				{
					b[k]=a;k++;
				}


		}

	
	   return 0;
}
