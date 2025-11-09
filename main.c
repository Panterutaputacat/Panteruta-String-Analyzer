#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BINARY 0
#define DECIMAL 1
#define HEX 2
#define OCTAL 3
#define ALL_TYPES 4
char string[255];
void analyze(char* string, int type);

int main(int argc, char *argv[]) {

printf("Panteruta String Analyzer!\n");

if(argc < 2) {
printf("Error: Too few arguments.\n");
return -1;
}

 if(strcmp(argv[1], "/help") == 0) {

    printf("Use: Analyze strings\nExample: pta \"I like vanilla\" /bin \n");
    analyze("I like vanilla", BINARY);
    printf("\nSyntax:\n pta \"[STRING]\" /[DATA TYPE]\n");
    printf("pta /help\n");
    printf("Available data types:\n");
    printf("Binary (/bin): \nExample: Binary 01000001 ASCII: A\n");
    printf("Hex: (/hex)\nExample: Hex: 0x41 ASCII: A\n");
    printf("Decimal (/dec): \nExample: Decimal: 65 ASCII: A\n");
    printf("Octal: (/oct)\n Example: Octal: 101 ASCII: A\n");
    printf("To print in all of the data types, use \"/all\"\n");
    printf("Example: Binary: 01000001 Hex: 0x41 Decimal: 65 Octal: 101 ASCII: A");


} else if(!strcmp(argv[2], "/bin")) {
analyze(argv[1], BINARY);
} else if(!strcmp(argv[2], "/hex")) {
    analyze(argv[1], HEX);
} else if(!strcmp(argv[2], "/dec")) {
    analyze(argv[1], DECIMAL);
} else if(!strcmp(argv[2], "/oct")) {
    analyze(argv[1], OCTAL);
} else if(!strcmp(argv[2], "/all")) {
analyze(argv[1], ALL_TYPES);
} else {
    printf("Illegal move");
}


}

void analyze(char* string, int type) {
int size = (int)strlen(string);
char *startstr = string;
char *current = string;
char *endstr = string + size;
switch(type) {

case 0:

printf("Binary of string: %s\n", string);

while(!(current > endstr)) {

printf("Binary: %b ASCII: %c", *current, *current);

if(*current == ' ') {

printf("(Space)\n");

} else if(*current == '\0') {

printf("(Null character)\n");

} else {
    printf("\n");
} 
current++;

}
break;
case 1:

printf("Decimal of string: %s\n", string);

while(!(current > endstr)) {

printf("Decimal: %d ASCII: %c", *current, *current);

if(*current == ' ') {

printf("(Space)\n");

} else if(*current == '\0') {

printf("(Null character)\n");

} else {
    printf("\n");
} 
current++;
}
break;
case 2:

printf("Hex of string: %s\n", string);

while(!(current > endstr)) {

printf("Hex: 0x%x ASCII: %c", *current, *current);

if(*current == ' ') {

printf("(Space)\n");

} else if(*current == '\0') {

printf("(Null character)\n");

} else {
    printf("\n");
} 
current++;
}
break;
case 3: 
printf("Octal of string: %s\n", string);

while(!(current > endstr)) {

printf("Octal: %o ASCII: %c", *current, *current);

if(*current == ' ') {

printf("(Space)\n");

} else if(*current == '\0') {

printf("(Null character)\n");

} else {
    printf("\n");
} 
current++;

}

break;

case 4:

printf("Binary, Hex, Decimal and Octal of string: %s\n", string);

while(!(current > endstr)) {

printf("Binary: %b Hex: %x Decimal: %d Octal: %o ASCII: %c", *current, *current, *current, *current, *current);

if(*current == ' ') {

printf("(Space)\n");

} else if(*current == '\0') {

printf("(Null character)\n");

} else {
    printf("\n");
} 
current++;
}
}
}