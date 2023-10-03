This is argc and argv. The former is the count of arguments in the line of code, while argv is a one-dimensional array of strings. In this case, the strings are the arguments in the line of code.

Basically,
argc = argument count
argv = argument vector

Here's a practical example:
Let's take this line of code in the command line - touch doc1 doc2 doc3 doc4
This line of code creates multiple files

The argc will show the number of arguments in the command line. In this case we have 5 arguments (the name of the program will also be counted as an argument).
On the other hand, argv points to each argument as a string starting from 0.

Thus,
where argc = 5
argv[0] will be "touch"
argv[1] will be doc1
argv[2] will be doc2... and so on.
