bool isValid(char* s) {
    // using stack
	char stack[10000];
	char* pt_stack = stack;
	char* pt_s = s;
	while (*pt_s != '\0') {
		if (*pt_s == '{' || *pt_s == '[' || *pt_s == '(') {
			*pt_stack = *pt_s;
			pt_stack++;
		}

		else if (*pt_s == '}') {
			if (pt_stack == stack || *(pt_stack - 1) != '{') {
				return false;
			}
			pt_stack--;
		}

		else if (*pt_s == ']') {
			if (pt_stack == stack || *(pt_stack - 1) != '[') {
				return false;
			}
			pt_stack--;
		}

		else if (*pt_s == ')') {
			if (pt_stack == stack || *(pt_stack - 1) != '(') {
				return false;
			}
			pt_stack--;
		}
		pt_s++;
	}

	return pt_stack == stack;
}