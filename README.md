# get_next_line
3rd Project of the 42us curriculum<p>

Recreation of the getline function in C<p>

Written in accordance with the norm. (see below)<br>
Functions allowed: read, malloc, free<br>
Only two files may be submitted alongside libft (our 1st project, a recreation of useful tools from the C library)<p>

<p align=left>--<B>Project Summary</B>--<br>
• Write a function that returns a line read from a file descriptor<br>
• a "line" is defined as a succession of characters that end with a '\n' (ascii code 0x0a) or with End of File (EOF)<Br>
• the function must return its results without '\n'<br>
• calling the function get_next_line in a loop will allow you to read the text available in a file descriptor one line at <br>a time until the end of text, no matter the size of either the text or one of its lines<br>
• the header file must include the macro "BUFF_SIZE" for the reading buffer<br>
• global varaibles are forbidden<br>
• static variables are allowed<br>
• Bonus points if: -use only one static variable / handle multiple file descriptors<p>
<p>

<p align=left>--<b>Norm</b> (Very Brief Summary, does not encompass all the rules)--<br>
• Functions must not exceed 25 lines, not counting the function's own curly brackets<br>
• No more than 5 function-definitions in a .c file<br>
• One instruction per line<br>
• One single variable declaration per line; cannot stick declaration and initialisation on the same line<br>
• Multiple assignments are forbidden<br>
• No more than 5 variables per bloc<br>
• Forbidden functions are: [for] [do ... while] [switch] [case] [goto]<br>
• Wildcard (*.c) usage is forbidden in Makefile<br>
