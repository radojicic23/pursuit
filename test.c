#include "debugger.h"


int function(int i, int j) {
    return i + j;
}

int main() {
    char c = 'X';
    char *str = "hello";
    int i = 20;
    int j = 30;
    function(i, j);
    
	debug(c); // c = X
    debug(str); // str = hello
    debug(i, str, function(i, j)); // i = 20
								   // str = hello
								   // function(i, j) = 50
								
	debug_raw("counting:", 1, 2, 3, 4, 5.5); // counting: 1 2 3 4 5
	debug_raw(str, "world!"); // hello world!
	
	idebug(i); // test.c:24: i = 20
	idebug(j, str); // test.c:25:
							//j = 30 
							//str = hello
								
	idebug_raw("The return of function if:", function(i, j)); // test.c:29: The return of function if: 50

    return 0;
}
