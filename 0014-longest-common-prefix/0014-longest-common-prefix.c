char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize <= 0) {
		return "";
	}

	char *result = (char *)malloc(strlen(strs[0])+1);
	int len = strlen(strs[0]);

	strcpy(result, strs[0]);
	
	if (result == NULL)
		return "";

	for (int i = 0; i < len; i++) {
		char pre_char = strs[0][i];

		for (int j = 0; j < strsSize; j++) {
			if (strs[j][i] != pre_char) {
				result[i] = '\0';
				return result;
			}
		}
	}
	return result;
}