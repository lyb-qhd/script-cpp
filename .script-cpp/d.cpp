#include<bits/stdc++.h>
using namespace std;
using uint=unsigned int;
using str=string;
constexpr char* READ_ERR=
"Error when reading set.txt .\n"
"Read readme.txt.";
constexpr char digits[]="0123456789ABCDEF";
str toHex(uint x) {
	string ret;
	for(int i=0;i<8;i++) 
		ret=str(1,digits[x&0xf])+ret,
		x>>=4;
	return str("0x")+ret;
}

