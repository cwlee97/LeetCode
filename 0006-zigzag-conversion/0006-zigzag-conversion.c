char* convert(char* s, int numRows) {
    if (numRows == 1 || strlen(s) <= 2) {
        return s;
    }

    int cycle;
    int cycle_size = numRows+(numRows-2);
    
    if (strlen(s) % cycle_size == 0) {
        cycle = (strlen(s) / (numRows+(numRows-2)));
    }
    else {
        cycle = (strlen(s) / (numRows+(numRows-2))) + 1;
    }
    
    char *result = (char *)malloc((strlen(s)+1) * sizeof(char));
    char *result_pt = result;
    
    for (int i = 0; i < numRows; i++) {
        if (i == 0) {
            for(int j = 0; j < cycle; j++) {
                *result_pt = s[cycle_size * j];
                result_pt++;
            }
        }
        else if (i == numRows-1) {
            for(int j = 0; j < cycle; j++) {
                if ((j*cycle_size)+(numRows-1) < strlen(s)) {
                    *result_pt = s[cycle_size*j + (numRows-1)];
                    result_pt++;
                }
            }
        }
        else {
            for(int j = 0; j < cycle; j++) {
                if ((j*cycle_size)+i < strlen(s)) {
                    *result_pt = s[(cycle_size*j)+i];
                    result_pt++;
                }
                if ((j*cycle_size)+(cycle_size-i) < strlen(s)) {
                    *result_pt = s[(cycle_size*j)+(cycle_size-i)];
                    result_pt++;
                }
            }
        }
    }
    *result_pt = '\0';
    return result;
}