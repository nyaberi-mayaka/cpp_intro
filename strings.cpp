#include <string>
#include <iostream>

using namespace std;

int main(void)
{
	string s1("JEREMIAH");
	string s("NYABERI MAYAKA"); //initialize a string during declaration
	cout<<s<<endl;
	string k(5, 'i'); //initialize a string with the same character n times during declaration
	cout<<k<<endl;
	cout<<"string length is : "<<s.length()<<endl; // find the lenght of a string.
	cout<<"the character at index 0 is: "<<s.at(0)<<endl; //find the character at a spacific index in the string
	s.append(" ");
	cout<<"The appended string is: " <<s.append(s1)<<endl; // appends a string s1 to s.
	cout<<"The substring of s is: " << s.substr(0,5) <<endl; // finds the substring within the givenstrin.
	cout<<"The remaining string is: "<<s.erase(2, 2) <<endl; // erase (starting index, number of characters to erase from a string).
	cout<<"The starting index of a substring within the main string is: " << s.find("AYAKA") << endl; // determines the statring index of a substring within the main string.
	cout<<"The modified string after replacing a substring is: "<< s.replace(s.find("AYAKA"), 5, "ZILLA") << endl; // replaces characters staring from index to eindx
}
