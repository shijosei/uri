#include <fstream>
#include <iostream>

/**
 * URI decoder.
 * Translates %xx (xx = two hex digits) to the character with the
 * appropriate ASCII code. Translates '+' into space. Leaves all
 * other characters unchanged.
 *
 * Example:
 * - In:  "Hello+world%21"
 * - Out: "Hello world!"
 *
 * @param s The string to decode.
 * @returns The decoded string.
 */
const char *uridecode(const char *s) {
	static char ret[100];
	for(auto *p=ret;*s;++s) 
		if (*s=='%') {
			auto const a {*++s}; auto const b {*++s};
			*p++ = (a<='9' ? a-'0' : a-'a') * 16 + (b<='9' ? b-'0' : b-'a');
		} 
		else if (*s=='+') *p++ = ' ';
		else *p++ = *s;
	
	return ret;
}

int main() {
	char input[150];
	std::cin.getline(input, sizeof(input));
    std::cout << uridecode(input) << std::endl;
    return 0;
}

