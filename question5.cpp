#include<iostream>
#include<fstream>
using namespace std;


void vowelwords()
{
	fstream first, second;
	string word;
	first.open("first.txt");
	
	second.open("second.txt", fstream::app);

	while (first >> word)
	{
		if(word[0]=='a' ||  word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u' )
		{
			
			second << word<<" hello";
		}
	}

}


int main()
{
	vowelwords();
}