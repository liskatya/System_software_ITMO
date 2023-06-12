int is_whitespace(char c) { return c == ' ' || c == '\t' || c == '\n'; }

int string_count(char* str) {
    char* curr = str;
    int size = 0;
    while(*curr != 0) {
        size += sizeof(*curr);
        curr++;
    }
    return size;
}

int string_words(char* str)  {
    char* curr = str;
    int let = 0;
    int words = 0;
    while(*curr != 0) {
        if(!is_whitespace(*curr)) {
            let++;
            curr++;
        }
        else {
            if(let != 0) {
                words++;
            }
            curr++;
            let = 0;
        }
    }
    if(let > 0) {
        words++;
    }
    return words;
}