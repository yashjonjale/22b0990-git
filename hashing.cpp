#include "hashing.hpp"

int hash_string(string s) {
	int m=13;
	int n=s.length();
	int val=0;
	for(int j=0;j<n;j++){
		int x=(s[j])%m;
		val+=x;
	}
	return val;
}
