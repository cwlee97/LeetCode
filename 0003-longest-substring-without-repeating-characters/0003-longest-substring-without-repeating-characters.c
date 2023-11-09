int lengthOfLongestSubstring(char* s) {
    char* pt = s;
    char* s_pt = s;
    int result = 0;

    if (strlen(s) == 0) {
        return 0;
    }

    for (int i = 0; i < strlen(s); i++) {
        char* temp_s_pt = s_pt;
        for (int j = 0; j < pt - s_pt; j++) {
            if (*temp_s_pt == *pt) {
                if (pt - s_pt > result) {
                    result = pt - s_pt;
                }
                s_pt = temp_s_pt + 1;
                break;
            }
            temp_s_pt++;
        }
        if (i == strlen(s) - 1) {
                if (pt - s_pt + 1 > result) {
                    result = pt - s_pt + 1;
                }
            }
        pt++;
    }
    return result;
}