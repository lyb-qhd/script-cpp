#include"d.cpp"
int main() {
	uint ret=system("b.exe");
	cout<<	"\n\n--------------------------------\n"
			"Return value: "<<ret<<"("<<toHex(ret)<<").\n";
	system("pause");
	return 0;
}



