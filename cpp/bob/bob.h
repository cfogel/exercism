#include <iostream>
using namespace std;
class bob{
public:
	static bool isAllUpper(string inp){
			for(int a = 0; a < int(inp.length()); a++){
				if(islower(inp[a])){
					return false;
				}
			}
			return true;
		}
	static bool isAllNum(string i){
		for(int b = 0; b < int(i.length()); b++){
			if(isalpha(i[b])){
				return false;
			}
		}
		return true;
	}
	static bool isAllWhite(string in){
		for(int c = 0; c < int(in.length()); c++){
			if(!isspace(in[c])){
				return false;
			}
		}
		return true;
	}
	static string hey(string input){
		if(isAllWhite(input)){
			return "Fine. Be that way!";
		}
		if (isAllUpper(input) && !isAllNum(input)){
			return "Whoa, chill out!";
		}
		if (input.at(input.length()-1) == '?'){
			return "Sure.";
		}
		return "Whatever.";
	}
};