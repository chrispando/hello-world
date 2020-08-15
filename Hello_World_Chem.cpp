#include <iostream>
#include <string>

using namespace std;


int main()
{
	string helloWorld = "Hello World";
	const int numberOfElements = 118;
	string elements[numberOfElements] = { "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Ci", "Mn",
		"Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag",
		"Cd", "In", "Sn", "Sb", "Te", "I", "Xe", "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu",
		"Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am",
		"Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Nh", "Fl", "Mc", "Lv", "Ts", "Og" };

	string s1, s2,s3;
	string s(helloWorld.length(), ' ');
	char* c = new char;
	string val = "x";
	for (int index = 0; index < helloWorld.length(); index++)
	{
		s1 = helloWorld.substr(index, 2);
		s2 = helloWorld.substr(index + 1, 2);
		s3 = helloWorld.substr(index, 1);

		for (int i = 0; i < numberOfElements; i++)
		{
			if (s1 == elements[i])
			{
				s.replace(index, 2, s1);
				index += 2;
			}
			else if (s2 == elements[i])
			{
				s.replace(index + 1, 2, s2);
				index++;
			}
			else if (toupper(s3[0]) == elements[i][0] && elements[i].length() == 1)
			{
				s.replace(index, 1, elements[i]);
			}
		
		}
	}

	for (int index = 0; index < s.length(); index++)
	{
		if (s[index] == ' ')
		{
			*c = helloWorld[index];
			for (int i = 0; i < numberOfElements; i++)
			{
				if (toupper(*c) == toupper(elements[i][0]))
				{
					if (elements[i].length() == 1)
					{
						s.replace(index, 1, elements[i]);
					}
					else if (elements[i].length() == 2)
					{
						s.replace(index, 2, elements[i]);
					}
				}
			}
		}
		else
		{
			//Some code here
		}
	}
	
	cout << s << endl;
	
	return 0;
}