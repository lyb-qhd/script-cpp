#include"d.cpp"
str c; ifstream fin("set.txt"); 
int main() {
	if(!fin.is_open()){ cout<<READ_ERR; return 1; } else getline(fin,c);
	return system(("\""+c+"\" b.cpp -o b.exe -std=c++14 -O2 -static ").c_str());
}
