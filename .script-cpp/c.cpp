#include"d.cpp"
str c; ifstream fin("set.txt"); 
int main() {
	if(!fin.is_open()){ cout<<READ_ERR; return 1; } else getline(fin,compiler);
	return system("\""+compiler+"\" b.cpp -o b.exe -std=c++14 -o2 -static ");
}
