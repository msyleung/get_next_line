# get_next_line
3rd Project of the 42us curriculum

Recreation of the getline function in C

Written in accordance with the norm. (see below)
Functions allowed: read, malloc, free
Only two files may be submitted alongside libft (our 1st project, a recreation of useful tools from the C library)<p>

--**Project Summary**--
```
• Write a function that returns a line read from a file descriptor
• a "line" is defined as a succession of characters that end with a '\n' (ascii code 0x0a) or with End of File (EOF)
• the function must return its results without '\n'
• calling the function get_next_line in a loop will allow you to read the text available in a file descriptor one line at a time until the end of text, no matter the size of either the text or one of its lines
• the header file must include the macro "BUFF_SIZE" for the reading buffer
• global varaibles are forbidden
• static variables are allowed
• Bonus points if: -use only one static variable / handle multiple file descriptors
```

--**Norm** *(Very Brief Summary, does not encompass all the rules)*--
```
• Functions must not exceed 25 lines, not counting the function's own curly brackets
• No more than 5 function-definitions in a .c file
• One instruction per line
• One single variable declaration per line; cannot stick declaration and initialisation on the same line
• Multiple assignments are forbidden
• No more than 5 variables per bloc
• Forbidden functions are: [for] [do ... while] [switch] [case] [goto]
• Wildcard (*.c) usage is forbidden in Makefile
```
