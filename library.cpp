#include "library.h"

int main() {

	Library lib;

	lib.addBook("C++ Programming", "Dietel");
	lib.addBook("C-- Programming", "Lolcat");
	lib.addBook("Hello World", "General Meow");

	lib.listBooks();

	return 0;	

}