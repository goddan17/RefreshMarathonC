void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 65; i <= 90; i++) {
        char c;
        c = i % 2 != 0 ? i : i + 32; 
        mx_printchar(c);
    }
    mx_printchar('\n'); 
}

