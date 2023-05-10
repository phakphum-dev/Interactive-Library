#include <iostream>
#include "admin.h"

int main() {
	int q, t, x;
	std::cin >> q;
	while(q--){
		std::cin >> t;
		if(t == 1){
			std::cin >> x;
			std::cout << (usePakpim(x) ? "true": "false");
		}
		else if(t == 2){
			std::cout << usePeteza();
		}
		else{
			std::cout << useBlackslex();
		}
		std::cout << "\n";
	}
	return 0;
}
