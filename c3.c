

//Name: Dirshe Salat
//Course: C Module

#include<stdio.h>
#include<string.h>

int leet(char *infile, char *outfile) 
{
    char ch;
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
	
	if(in == NULL) {
		printf("Could not read %s\n", infile);
		return 1;
	}
	if(out == NULL) {
		printf("Could not write %s\n", outfile);
		return 1;
	}
	
    while ((ch = getc(in)) != EOF) {
        
        switch (ch) {
					case 'A':
					case 'a':	
						fputc('4', out);
						break;
					case 'C':
					case 'c':
						fputc('(', out);
						break;
					case 'E':
					case 'e':
						fputc('3', out);
						break;
					case 'F':
					case 'f':
						fputs("ph", out);
						break;
					case 'I':
					case 'i':	
						fputc('1', out);
						break;
					case 'G':
					case 'g':
						fputc('6', out);
						break;
					case 'O':
					case 'o':
						fputc('0', out);
						break;
					case 'S':
					case 's':
						fputc('5', out);
						break;
					case 'T':
					case 't':
						fputc('7', out);
						break;
					case 'Y':
					case 'y':
						fputc('`', out);
						fputc('/', out);
						break;
					default:
						fputc(ch, out);
						break;
        }
    }
    //now we close 
    fclose(in);
    fclose(out);
	return 0;
}
int main() {
    char inFile[1024];
	char outFile[1024];
	
	//now we call function 
	printf("Please enter the name of the input file: ");
	scanf("%1023s", inFile);
	
	printf("Please enter the name of the output file: ");
	scanf("%1023s", outFile);
    return leet(inFile, outFile);
    
    
}

