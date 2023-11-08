int strStr(char* haystack, char* needle) {
    size_t len_haystack = strlen(haystack);
	size_t len_needle = strlen(needle);

	char* haystack_pt = haystack;
	char* needle_pt = needle;

	for (int i = 0; i < len_haystack; i++) {
		char* haystack_start_pt = haystack_pt;
		char* needle_start_pt = needle_pt;
		if (*haystack_start_pt == *needle_start_pt) {
            if (len_needle == 1)
				return haystack_start_pt - haystack;
			for (int j = 0; j < len_needle - 1; j++) {
				++haystack_start_pt;
				++needle_start_pt;
				if (*haystack_start_pt != *needle_start_pt) {
					haystack_pt++;
					break;
				}
				if (j == len_needle - 2) {
					return (haystack_start_pt - haystack) - (len_needle-1);
				}
			}
		}
		else {
			haystack_pt++;
		}
	}
	return -1;
}