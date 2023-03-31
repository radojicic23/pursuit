```bash
 /$$$$$$$  /$$   /$$ /$$$$$$$   /$$$$$$  /$$   /$$ /$$$$$$ /$$$$$$$$
| $$__  $$| $$  | $$| $$__  $$ /$$__  $$| $$  | $$|_  $$_/|__  $$__/
| $$  \ $$| $$  | $$| $$  \ $$| $$  \__/| $$  | $$  | $$     | $$   
| $$$$$$$/| $$  | $$| $$$$$$$/|  $$$$$$ | $$  | $$  | $$     | $$   
| $$____/ | $$  | $$| $$__  $$ \____  $$| $$  | $$  | $$     | $$   
| $$      | $$  | $$| $$  \ $$ /$$  \ $$| $$  | $$  | $$     | $$   
| $$      |  $$$$$$/| $$  | $$|  $$$$$$/|  $$$$$$/ /$$$$$$   | $$   
|__/       \______/ |__/  |__/ \______/  \______/ |______/   |__/
```

# Pursuit🚨
Debug your C program easy and like a pro with pursuit debugger. It's very easy to use!

## Run 
- Move debugger.h in your directory.
- Include debugger in your C file. See [test.c](https://github.com/radojicic23/pursuit/blob/master/test.c) and try yourself.
```c
#include "debugger.h"
```

## Hints
- Chars have type int, so you have to convert them into char type to print them as actual chars:
```c
debug_raw("Find the", (char)'I'); // returns => Find the I
```

- To remove all debugging output quickly:
```c
#define NDEBUG
#include "debugger.h"


int main() {
    int number = 10;
    debug(number); // return nothing
    return 0;
}
```

- Quick debugging (include the debugger header file wherever you want it:
```c
int function() {
    #include "debugger.h"
    
    int i = 2;
    int j = 3;
    
    debug(i, j);// returns // i = 2
                          // j = 3
    
    return i + j;
} 

int main() {
    function();
    // debug(function()); // => error (because it's only included inside function)
    return 0;
}
```
