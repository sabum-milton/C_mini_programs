/* There are two files types:

1. text file: extension of .txt, contains simple text.
2. binary file: extension of .bin, not readable, contains information in binary code.

File Operations Include:
opening of file
closing of file
reading from file
writing into file
appending data into file.

r = opens an existing text file for reading 
r+ = opens an existing tet file for reading and writing purposes.
w = opens a file for writing purposes
w+ = opens a file for reading and writing purposes
a = opens a file for writing appending purposes
a+ = opens an existing text file in writing and reading appending mode.
*/
#include<stdio.h>
int main(){
	//fopen(): opens a new text file on given path, it has path and mode of creation.
	FILE *fp;
	fp = fopen("C_mini_programs/demo.txt","w");
	fprintf(fp,"Hello Friends, How are you all doing these days na");
	fclose(fp); // used to close the file.
	return 0;
}
