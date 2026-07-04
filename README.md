# nullchip
 theres nothing interesting in the "meh" folder. that  was just me learning C
uhhh idk.
I wanna make a programming language as a final project to learn C. that's why you'll see mini-projects in the "notes" section
***these (for now) are only plans***

## usage
nullchip <file.nip>

## syntax


## notes (just for me ^w^)
### this shit was strategically transferred from gemini... im sorry XD

1. the pointer playground
    the goal: make a tiny C program that uses malloc to grab a chunk of memory, stores a few numbers in it, and then uses free to give it back. also, write a function that swaps two variables using their memory addresses (pointers).
    why: your whole language will be built on pointers. if you don't know how to point to a specific spot in memory, nullchip will crash immediately.

2. the string chopper
    the goal: hardcode a fake line of code, like char code[] = "print nip";, and write a loop that prints each word on a new line without using any fancy external libraries.
    why: C doesn't have a .split() function. strings are literally just arrays of characters ending in a secret \0. you have to learn how to crawl through raw characters to build your lexer (the thing that chops code into readable tokens).

3. the .nip file reader
    the goal: make a program that opens main.nip, checks exactly how many bytes big it is, asks the OS for that exact amount of memory, dumps the text into it, prints it to your zsh terminal, and safely closes it.
    why: you need to read your source code! this teaches you file I/O (fopen, fread) and proves you can handle dynamic memory without leaking it into the void.

4. the linked list
    the goal: create a custom struct (which is basically a custom data type) that holds a word, and a pointer to another struct of the same type. chain three of them together and write a while loop to print them all.
    why: when nullchip reads a .nip file, it won't know how many commands are inside ahead of time. you can't use fixed-size arrays for that; you have to link chunks of memory together on the fly to build a flexible list of instructions.
